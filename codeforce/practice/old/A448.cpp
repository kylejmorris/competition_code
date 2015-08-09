#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n;
    int cups = 0;
    int medals = 0;
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    cups+=(a+b+c);
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d", &n);
    medals+=(a+b+c);
    while(n>0) {
        if(cups>0) {
            if(cups>5) {
                cups-=5;
            } else {
                cups = 0;
            }
        } else if(medals>0) {
            if(medals>10) {
                medals-=10;
            } else {
                medals=0;
            }
        }
        n--;
    }
    if(cups>0 || medals>0) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
