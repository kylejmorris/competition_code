#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<iostream>

using namespace std;

int main() {
    string original;
    cin >> original;
    string a = "";
    string b = "";
    for(int i=0; i<(int)original.size(); i++) {
        if(i!=(int)original.size()-2) {
            a+=original[i];
        }
        if(i!=(int)original.size()-1) {
            b+=original[i];
        }
    }
    int as, bs, o;
    as = atoi(a.c_str());
    bs = atoi(b.c_str());
    o = atoi(original.c_str());
    printf("%d", max(max(as,bs), o));
    return 0;
}
