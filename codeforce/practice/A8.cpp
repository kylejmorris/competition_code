#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool found(string target, string a, string b) {
    bool found = false;
    if(target.find(a)!=string::npos && target.find(b)!=string::npos) {
       std::size_t pos = target.find(a);
       if(target.find(b, pos+a.size())!=string::npos) {
           found = true;
       }
    } 
    return found;
}

int main() {
    string search;
    string a;
    string b;
    bool forward = false;
    bool backward = false;
    cin >> search >> a >> b;
    if(found(search, a, b)) {
        forward=true;
    }
    reverse(search.begin(), search.end());
    if(found(search, a, b)) {
        backward = true;
    }
    if(forward && backward) {
        cout << "both";
    } else if(forward) {
        cout << "forward";
    } else if(backward) {
        cout << "backward";
    } else {
        cout << "fantasy";
    }
}

