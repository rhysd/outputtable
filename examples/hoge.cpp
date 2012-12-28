#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <utility>

#include "../include/outputtable.hpp"

int main()
{
    std::vector<int> v = {1, 2, 3, 4};
    std::cout << v << '\n'; // { 1 2 3 4 }

    std::set<std::pair<int, double>> s = {{1, 1.0}, {2, 2.0}};
    std::cout << s << '\n'; // { ( 1 1 ) ( 2 2 ) }

    std::unordered_multiset<int> ums = {1, 2, 1, 2, 2, 1};
    std::cout << ums << '\n'; // { 2 2 2 1 1 1 }

    auto t = std::make_tuple(1, 'a', 1.1);
    std::cout << t << '\n'; // ( 1 a 1.1 )

    std::unordered_multimap<int, char> umm = {{1, 'a'}, {2, 'b'}, {1, 'c'}};
    std::cout << umm << '\n'; // { ( 1 a ) ( 2 b ) ( 1 c ) }

    std::map<std::list<int>, std::vector<double>> m = {{{1, 2}, {1.1, 1.2}}, {{10, 20}, {2.1, 2.2, 2.3}}};
    std::cout << m << '\n'; // { ( { 1 2 } { 1.1 1.2 } ) ( { 10 20 } { 2.1 2.2 2.3 } ) }

    return 0;
}
