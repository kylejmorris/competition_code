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
    int n, m;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for(int i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    sort(a, a+n);
    sort(b, b+m);
    int count = 0;
    int bindex = 0;
    int savedPos = 0;
    for(int i=0; i<n; i++) {
        bindex = savedPos;
        while(abs(b[bindex]-a[i])>1 && bindex<m) {
            bindex++;
        }
        if(bindex<m) {
            count++;
            savedPos = bindex+1;
        }
    }
    printf("%d", count);
    return 0;
}
