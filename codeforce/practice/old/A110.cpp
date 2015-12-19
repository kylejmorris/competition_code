#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<ctype.h>
#include<iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;
    while(n>0) {
        int rem = n%10;
        if(rem==7 || rem==4) {
            count++;
        }
        n/=10;
    }
    bool isvalid = true;
    if(count==0) { isvalid = false;}
    while(count>0 && isvalid) {
        int rem = count%10;
        if(rem==4 || rem==7) {
            count/=10; 
        } else {
            isvalid = false;
        }
    }
    if(isvalid) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
