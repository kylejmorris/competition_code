#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int i = 1;
    if(n%2==0) {
        i = 1;
    } else {
        i = -1;
    }
    long long int result =i*((n+1)/2);
    cout << result;
    return 0;
}
