#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n;
    cin >> k;
    long long val;
    if(n%2!=0) {
        if(k<=(n+1)/2) {
            val = 2*k-1; 
        } else {
            k-=(n+1)/2;
            val = 2*k;
        }
    } else {
        if(k<=n/2) {
            val = 2*k-1;
        } else {
            k-=(n/2);
            val = 2*k;
        }
    }
    cout << val;
    return 0;
}
