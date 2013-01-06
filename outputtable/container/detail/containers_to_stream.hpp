#if !defined OUTPUTTABLE_IMPL_CONTAINERS_TO_STREAM_HPP_INCLUDED
#define      OUTPUTTABLE_IMPL_CONTAINERS_TO_STREAM_HPP_INCLUDED

#include <iostream>
#include <type_traits>

namespace output_containers_impl {
    template<class T>
    class has_begin{
        template<class U>
        static auto check(U v) -> decltype( std::begin(v), std::true_type() );
        static auto check(...) -> decltype( std::false_type() );
    public:
        typedef decltype( check( std::declval<T>() ) ) type;
        static bool const value = type::value;
    };

    template<class T>
    class has_end{
        template<class U>
        static auto check(U v) -> decltype( std::end(v), std::true_type() );
        static auto check(...) -> decltype( std::false_type() );
    public:
        typedef decltype( check( std::declval<T>() ) ) type;
        static bool const value = type::value;
    };

    template<class Container>
    void container_to_stream( std::ostream &ost, Container const& c,
                              typename std::enable_if< has_begin<Container>::value &&
                                                       has_end<Container>::value >::type* = 0)
    {
        ost << '{';
        for(auto begin = std::begin(c), end = std::end(c);;){
            ost << *begin;
            if(++begin != end){
                ost << ", ";
            } else {
                break;
            }
        }
        ost << '}';
    }

} // namespace output_containers_impl

#endif    // OUTPUTTABLE_IMPL_CONTAINERS_TO_STREAM_HPP_INCLUDED
