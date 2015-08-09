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
    int q = n/2;
    int p = n%2;
    while(q>=0) {
        if((q+p)%m==0) {
            break;
        } else {
            q--; p+=2;
        }
    }
    if(n==0 || q<0 || 2*q+p!=n || (q+p)%m!=0) {
        printf("-1");
    } else {
        printf("%d", p+q);
    }
    return 0;
}
