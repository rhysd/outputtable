```cpp
std::vector<int> v = {1, 2, 3, 4};
std::cout << v << '\n'; // {1, 2, 3, 4}

std::set<std::pair<int, double>> s = {{1, 1.0}, {2, 2.0}};
std::cout << s << '\n'; // {(1, 1), (2, 2)}

std::unordered_multiset<int> ums = {1, 2, 1, 2, 2, 1};
std::cout << ums << '\n'; // {2, 2, 2, 1, 1, 1}

auto t = std::make_tuple(1, 'a', 1.1);
std::cout << t << '\n'; // (1, a, 1.1)

std::unordered_multimap<int, char> umm = {{1, 'a'}, {2, 'b'}, {1, 'c'}};
std::cout << umm << '\n'; // {(2, b), (1, c), (1, a)}

std::map<std::list<int>, std::vector<double>> m = { {{1, 2}, {1.1, 1.2}}, {{10, 20}, {2.1, 2.2, 2.3}} };
std::cout << m << '\n'; // {({1, 2}, {1.1, 1.2}), ({10, 20}, {2.1, 2.2, 2.3})}

std::pair<boost::optional<int>, boost::optional<int>> op(10, boost::none);
std::cout << op << '\n'; // (Optional 10, None)
```

## License
    Copyright (c) 2013 rhysd

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
    of the Software, and to permit persons to whom the Software is furnished to do so,
    subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
    INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
    PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
    THE USE OR OTHER DEALINGS IN THE SOFTWARE.
