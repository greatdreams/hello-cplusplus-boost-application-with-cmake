#include<iostream>
#include<string>
#include<algorithm>
#include<boost/regex.hpp>
#include<boost/array.hpp>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Hello, cpp" << endl;

    //string s = "Boost Libraries";
    //boost::regex expr("\\w+\\s\\w+";
    //cout << boolalpha << boost::regex_match(s, expr) << endl;

    typedef boost::array<std::string, 3> array;
    array a;

    a[0] = "cat";
    a.at(1) = "shark";
    *a.rbegin() = "spider";

    std::sort(a.begin(), a.end());
    for(const std::string &s: a) {
      std::cout << s << endl;
    }

    std::cout << a.size() << "\n";
    std::cout << a.max_size() << "\n";
    
    return 0;
}
