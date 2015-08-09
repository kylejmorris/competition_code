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
    int n;
    scanf("%d", &n);    
    int vals[n];
    int ma = -1;
    int mi = 1000000001;
    for(int i=0; i<n; i++) {
        cin >> vals[i];
        mi = min(vals[i], mi);
        ma = max(vals[i], ma);
    } 
    long long maC = 0;
    long long miC = 0;
    for(int i=0; i<n; i++) {
        if(vals[i]==mi) {
            miC++;
        }
        if(vals[i]==ma) {
            maC++;
        } 
    } 
    if(mi!=ma) {
        cout << ma-mi << " " << maC*miC;
    } else {
        long long result = ((miC-1)*miC)/2;
        cout << ma-mi << " " << result;
    }
    return 0;
}
