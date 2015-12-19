#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

long long int get(long long int n) {
    long long int result = -1;
    if(n<=9) {
        return n;
    } else if(n>9 && n<=99) {
        return 2*(n-10+1) + get(9);
    } else if(n>99 && n<=999) {
        return 3*(n-100+1) + get(99);
    } else if(n>999 && n<=9999) {
        return 4*(n-1000+1) + get(999);
    } else if(n>9999 && n<=99999) {
        return 5*(n-10000+1) + get(9999);
    } else if(n>99999 && n<=999999) {
        return 6*(n-100000+1) + get(99999);
    } else if(n>999999 && n<=9999999) {
        return 7*(n-1000000+1) + get(999999);
    } else if(n>9999999 && n<=99999999) {
        return 8*(n-10000000+1) + get(9999999);
    } else if(n>99999999 && n<=999999999) {
        return 9*(n-100000000+1) + get(99999999);
    } else if(n>999999999) {
        return 10*(n-1000000000+1) + get(999999999);
    }
    return -1;
}
long long int get2(long long int n) {
    if(n<=9) { return n;}
    long long int numDigits = 0;
    long long int temp = n;
    while(temp!=0) {
        temp/=10; numDigits++;
    }
    return numDigits*(n-(long long int)pow(10, numDigits-1)+1) + get2((long)(pow(10, numDigits-1))-1);
}
int main() {
    long n;
    cin >> n;
    cout << get(n);
    /*int previous = 0;
    previous = get2(1);
    for(int i=2; i<1000000000; i++) {
       int cur = get2(i); 
       int next = get(i+1);
       if(cur-previous != next-cur) {
            printf("different  values %d %d %d at i = %d\n", previous, cur, next, i);
       }
       previous = cur;
    }/
    return 0;
    */
}
