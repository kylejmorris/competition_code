#include<stdio.h>
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    stringstream s;
    s << 21;
    s << 123;
    string blah = s.str();
    cout << s.str();
}
