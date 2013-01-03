#if !defined OUTPUTTABLE_ASSOC_HPP_INCLUDED
#define      OUTPUTTABLE_ASSOC_HPP_INCLUDED

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

#include "detail/containers_to_stream.hpp"

template<class T>
std::ostream &operator<<(std::ostream &ost, std::set<T> const& s)
{
    output_containers_impl::container_to_stream(ost, s);
    return ost;
}

template<class T>
std::ostream &operator<<(std::ostream &ost, std::multiset<T> const& ms)
{
    output_containers_impl::container_to_stream(ost, ms);
    return ost;
}

template<class T>
std::ostream &operator<<(std::ostream &ost, std::unordered_set<T> const& us)
{
    output_containers_impl::container_to_stream(ost, us);
    return ost;
}

template<class T>
std::ostream &operator<<(std::ostream &ost, std::unordered_multiset<T> const& ums)
{
    output_containers_impl::container_to_stream(ost, ums);
    return ost;
}

template<class K, class V>
std::ostream &operator<<(std::ostream &ost, std::map<K, V> const& m)
{
    output_containers_impl::container_to_stream(ost, m);
    return ost;
}

template<class K, class V>
std::ostream &operator<<(std::ostream &ost, std::multimap<K, V> const& mm)
{
    output_containers_impl::container_to_stream(ost, mm);
    return ost;
}

template<class K, class V>
std::ostream &operator<<(std::ostream &ost, std::unordered_map<K, V> const& um)
{
    output_containers_impl::container_to_stream(ost, um);
    return ost;
}

template<class K, class V>
std::ostream &operator<<(std::ostream &ost, std::unordered_multimap<K, V> const& umm)
{
    output_containers_impl::container_to_stream(ost, umm);
    return ost;
}


#endif    // OUTPUTTABLE_ASSOC_HPP_INCLUDED
