#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iostream>
#include<sstream>

using namespace std;

int main() {
    int sa=0;
    int sb=0;
    int sc=0;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        sa+=t;
    }
    for(int i=0; i<n-1; i++) {
        int t;
        scanf("%d", &t);
        sb+=t;
    }
    for(int i=0; i<n-2; i++) {
        int t;
        scanf("%d", &t);
        sc+=t;
    }
    printf("%d\n", sa-sb);
    printf("%d", sb-sc);
    return 0;
}
