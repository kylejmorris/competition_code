#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    char p[s.size()+1];
    int distance = 0;
    for(int i=0; i<(int)t.length(); i++) {
        p[i] = t[i];//quick copy
        if(s[i]!=t[i]) {
           distance++; 
        }
    }
    int ds = distance;
    int dt = 0;
    for(int i=0; i<(int)s.length(); i++) {
        if(dt<ds) {
           p[i] = s[i];
           if(s[i]!=t[i]) {
                dt++; ds--;
           } 
        } else if(ds<dt) {
            p[i] = t[i];
            if(s[i]!=t[i]) {
                ds--; dt++;
            }
        } else {
            break;
        }
    }
    p[s.size()] = '\0';
    if(ds==dt) {
        printf("%s", p); 
    } else {
        printf("impossible");
    }
return 0;
}
