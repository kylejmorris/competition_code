#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<assert.h>


using namespace std; 

int gcd(int a, int b) {
    if(a==0) {
        return b;
    } else {
        return gcd(b%a, a);
    }
}

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    bool run = true;
    while(run) {
        int gcda = gcd(a, n);
        if(gcda>n) {
            printf("1"); run=false;
            break;
        } else {
            n-=gcda;
        }
        int gcdb = gcd(b, n);
        if(gcdb>n) {
            printf("0"); run=false;
            break;
        } else {
            n-=gcdb; 
        }
    }
    return 0;
}
