#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main() {
    int players[2] = {0, 0};
    int p = 0;
    int n;
    scanf("%d", &n);
    vector<int> vals;
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        vals.push_back(t);
    }
    while(vals.size()>0) {
        if(vals[0]>vals[vals.size()-1]) {
            players[p]+=vals[0];
            vals.erase(vals.begin());
        } else {
            players[p]+=vals[vals.size()-1];
            vals.erase(vals.begin()+vals.size()-1);
        }
        if(p) {
            p = 0;
        } else {
            p = 1;
        }
    }
    printf("%d %d", players[0], players[1]);
    return 0;
}
