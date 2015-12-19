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
    int n, k;
    scanf("%d %d", &n, &k);
    int f[n];
    int t[n];
    int joy[n];
    for(int i=0; i<n; i++) {
        scanf("%d %d", &f[i], &t[i]); 
        if(t[i]>k) {
            joy[i] = f[i]-(t[i]-k);
        } else {
            joy[i] = f[i];
        }
    }
    int maxval = -1000000000;
    for(int i=0; i<n; i++) {
        maxval = max(joy[i], maxval);
    }
    printf("%d", maxval);
    
    return 0;
}
