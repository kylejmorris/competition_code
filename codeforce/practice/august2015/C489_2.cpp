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

bool can(int m, int s) {
    return (s>=0 && s<=(9*m));
}
int main() {
    int s, m; 
    scanf("%d %d", &m, &s);
    int sum = s;
    if((!(m>0 && s==0) && s<=m*9) || (m==1 && s==0)) {
    for(int i=0; i<=m; i++) {
        for(int d=0; d<=9; d++) {
            if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1, sum-d)) {
                printf("%d", d);
                sum-=d;
                break;
            }
        }
    }
    printf(" ");
    sum = s;
    for(int i=0; i<=m; i++) {
        for(int d=9; d>=0; d--) {
            if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1, sum-d)) {
                printf("%d", d);
                sum-=d;
                break;
            }
        }
    }
    } else {
        printf("-1 -1");
    }
}
