/*
    03.1.cpp
    将字符串的字母转换成大写
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "Hello World";

    cout << "Original: " + s << endl;

    for (auto it = s.begin(); it != s.end(); it++) {
        *it = toupper(*it);
    }

    cout << "New: " + s << endl;

    return 0;
}

