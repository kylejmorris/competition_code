#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int moves[m];
    for(int i=0; i<m; i++) {
        scanf("%d", &moves[i]);
    }
    int i=1;
    int j=0;
    long long dist = 0;
    while(j<m) {
        if(i<moves[j]) {
            dist+=(moves[j]-i);
            i=moves[j]; j++;
        } else if(i==moves[j]) {
           while(i==moves[j] && j<m) {
                j++;
           } 
        } else {
            dist+=(n-i + moves[j]);
            i=moves[j]; j++;
        }
    }
    cout << dist;
    return 0;
}
