#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>
#include<utility>
#include<map>

using namespace std;

int main() {
    int n;
    map<string, int> mp;
    scanf("%d", &n); 
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        if(mp[s]==0) { cout << "OK\n"; } else { cout << s << mp[s] << "\n";}
        mp[s]++;
    }
}
