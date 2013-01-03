#if !defined OUTPUTTABLE_SEQUENCE_HPP_INCLUDED
#define      OUTPUTTABLE_SEQUENCE_HPP_INCLUDED

#include <cstddef>
#include <array>
#include <vector>
#include <list>
#include <deque>

#include "detail/containers_to_stream.hpp"

template<class T>
std::ostream &operator<<(std::ostream &ost, std::vector<T> const& v)
{
    output_containers_impl::container_to_stream(ost, v);
    return ost;
}

template<class T>
std::ostream &operator<<(std::ostream &ost, std::list<T> const& l)
{
    output_containers_impl::container_to_stream(ost, l);
    return ost;
}

template<class T>
std::ostream &operator<<(std::ostream &ost, std::deque<T> const& d)
{
    output_containers_impl::container_to_stream(ost, d);
    return ost;
}

template<class T, std::size_t N>
std::ostream &operator<<(std::ostream &ost, std::array<T, N> const& a)
{
    output_containers_impl::container_to_stream(ost, a);
    return ost;
}

#endif    // OUTPUTTABLE_SEQUENCE_HPP_INCLUDED
