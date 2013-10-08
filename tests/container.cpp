#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE outputtable_sequence_test
#include <boost/test/unit_test.hpp>

#include "../outputtable/container.hpp"
#include "./util.hpp"

BOOST_AUTO_TEST_CASE( vector )
{
    std::vector<int> v = {1, 2, 3, 4};
    BOOST_CHECK_EQUAL(pass_ss(v), "{1, 2, 3, 4}");
}

BOOST_AUTO_TEST_CASE( list )
{
    std::list<char> l = {'a', 'b', 'c'};
    BOOST_CHECK_EQUAL(pass_ss(l), "{a, b, c}");
}

BOOST_AUTO_TEST_CASE( nest_sequence )
{
    std::array<std::deque<int>, 2> a = {{{1, 2, 3}, {-1, -2, -3}}};
    BOOST_CHECK_EQUAL(pass_ss(a), "{{1, 2, 3}, {-1, -2, -3}}");
}

BOOST_AUTO_TEST_CASE( map )
{
    std::map<int, char> m = {{1, 'a'}, {2, 'b'}};
    BOOST_CHECK_EQUAL(pass_ss(m), "{(1, a), (2, b)}");
}

BOOST_AUTO_TEST_CASE( set )
{
    std::multiset<int> m = {1, 2, 2, 3, 4, 5};
    std::stringstream s;
    s << m;
    BOOST_CHECK_EQUAL(pass_ss(m), "{1, 2, 2, 3, 4, 5}");
}

BOOST_AUTO_TEST_CASE( nested_associate_container )
{
    std::map<std::multiset<int>, std::set<char>> m = {{{1, 2}, {'a', 'b'}}, {{4, 5}, {'c'}}};
    BOOST_CHECK_EQUAL(pass_ss(m), "{({1, 2}, {a, b}), ({4, 5}, {c})}");
}

BOOST_AUTO_TEST_CASE( pair )
{
    auto p = std::make_pair(1, 'a');
    BOOST_CHECK_EQUAL(pass_ss(p), "(1, a)");
}

BOOST_AUTO_TEST_CASE( tuple )
{
    auto t = std::make_tuple(1, 1.1, 'a');
    BOOST_CHECK_EQUAL(pass_ss(t), "(1, 1.1, a)");
}

BOOST_AUTO_TEST_CASE( nested_tuple )
{
    auto t = std::make_tuple(std::make_pair(1, 'a'), std::make_tuple('b', 1.1), "aiueo");
    BOOST_CHECK_EQUAL(pass_ss(t), "((1, a), (b, 1.1), aiueo)");
}
