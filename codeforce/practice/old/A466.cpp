#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n,m,a,b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int mi = 100000000;
    for(int c=0; c<=(n/m); c++) {
       mi = min(mi, a*(n-c*m) + c*b); 
    }
    mi = min(mi, b*(n/m+1));
    printf("%d", mi);
    return 0;
}
