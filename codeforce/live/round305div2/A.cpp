#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

int main() {
    string line;
    int k;
    cin >> line;
    scanf("%d", &k);
    if(k>(int)line.size()) {
        printf("NO");
        return 0;
    } 
    if((int)line.size()%k!=0) {
        printf("NO");
        return 0;
    }
    int sublength = line.size()/k;
    vector<string> subs;

    for(int i=0; i<(int)line.length(); i+=sublength) {
        string s(line.begin()+i, line.begin()+i+sublength);
        subs.push_back(s);
    }
    int index = 1;
    for(int i=0; i<(int)subs.size(); i++) {
        string cur = subs[i];
        reverse(cur.begin(), cur.end());
        if(cur!=subs[i]) {
            printf("NO");
            return 0;
        }
    } 
    printf("YES");

    return 0;
}

