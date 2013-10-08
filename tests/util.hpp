#if !defined OUTPUTTABLE_TEST_UTIL_HPP_INCLUDED
#define      OUTPUTTABLE_TEST_UTIL_HPP_INCLUDED

#include <sstream>
#include <string>

template<class T>
std::string pass_ss(T const& t)
{
    std::stringstream s;
    s << t;
    return s.str();
}


#endif    // OUTPUTTABLE_TEST_UTIL_HPP_INCLUDED
