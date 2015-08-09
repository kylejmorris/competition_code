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
    int n, c;
    scanf("%d %d", &n, &c);
    int ma = 0;
    int x[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }
    for(int i=0; i<n-1; i++) {
        ma = max(ma, x[i]-c-x[i+1]); 
    }
    printf("%d", ma);
    
    return 0;
}
