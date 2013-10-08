#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE outputtable_sequence_test
#include <boost/test/unit_test.hpp>

#include <boost/optional.hpp>
#include "../outputtable/optional.hpp"
#include "./util.hpp"

BOOST_AUTO_TEST_CASE( optional )
{
    boost::optional<int> o = 42;
    BOOST_CHECK_EQUAL(pass_ss(o), "Optional 42");
    boost::optional<int> o2 = boost::none;
    BOOST_CHECK_EQUAL(pass_ss(o2), "None");
}

BOOST_AUTO_TEST_CASE( nested_optional )
{
    boost::optional<boost::optional<int>> o = {{42}};
    BOOST_CHECK_EQUAL(pass_ss(o), "Optional Optional 42");
}
