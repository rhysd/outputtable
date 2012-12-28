#if !defined OUTPUTTABLE_TUPLE_AND_PAIR_HPP_INCLUDED
#define      OUTPUTTABLE_TUPLE_AND_PAIR_HPP_INCLUDED

#include <utility>
#include <tuple>

template<class T, class U>
std::ostream &operator<<(std::ostream &ost, std::pair<T, U> const& p)
{
    ost << "( " << p.first << " " << p.second << " )";
    return ost;
}

namespace output_containers_impl {

    template<class T>
    void print_args(std::ostream &ost, T const& t)
    {
        ost << t << ' ';
    }

    template<class T, class... Args>
    void print_args(std::ostream & ost, T const& t, Args const&... args)
    {
        ost << t << ' ';
        print_args(ost, args...);
    }

    template< std::size_t... Indices >
    struct index_tuple{};

    template < std::size_t Start,
               std::size_t Last,
               std::size_t Step = 1,
               class Acc = index_tuple<>,
               bool Finish = (Start>=Last) >
    struct index_range{
        typedef Acc type;
    };

    template < std::size_t Start,
               std::size_t Last,
               std::size_t Step,
               std::size_t... Indices >
    struct index_range< Start, Last, Step, index_tuple<Indices...>, false >
             : index_range<Start+Step, Last, Step, index_tuple<Indices..., Start>>
    {};

    template<class Tuple, std::size_t... Indices>
    void tuple_to_stream_impl(std::ostream &ost, Tuple const&t, index_tuple<Indices...>)
    {
        print_args(ost, std::get<Indices>(t)...);
    }

    template<class Tuple>
    void tuple_to_stream(std::ostream &ost, Tuple const& t)
    {
        tuple_to_stream_impl(ost, t, typename index_range<0, std::tuple_size<Tuple>::value>::type());
    }
} // namespace output_containers_impl

template<class... Types>
std::ostream &operator<<(std::ostream &ost, std::tuple<Types...> const& t)
{
    ost << "( ";
    output_containers_impl::tuple_to_stream(ost, t);
    ost << ')';
    return ost;
}

#endif    // OUTPUTTABLE_TUPLE_AND_PAIR_HPP_INCLUDED

