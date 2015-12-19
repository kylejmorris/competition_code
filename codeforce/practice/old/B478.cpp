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

long long getSum(long long n) {
    if(n<3) { 
        return n-1;
    } else {
        return ((n-1)*n)/2;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int val = n/m;
    int rem = n%m;
    long long mi = (m-rem)*(getSum(val)) + (rem)*(getSum(val+1));
    long long ma = getSum(n-(m-1));
    cout << mi << " " <<  ma;
    return 0;
}
