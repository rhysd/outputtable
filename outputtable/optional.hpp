#if !defined OUTPUTTABLE_OPTIONAL_HPP_INCLUDED
#define      OUTPUTTABLE_OPTIONAL_HPP_INCLUDED

#include <iostream>
#include <boost/optional.hpp>

template<class T>
std::ostream &operator<<(std::ostream &ost, boost::optional<T> const& val)
{
    if(val){
        ost << "Just " << *val;
    }else{
        ost << "Nothing";
    }
    return ost;
}

#endif    // OUTPUTTABLE_OPTIONAL_HPP_INCLUDED
