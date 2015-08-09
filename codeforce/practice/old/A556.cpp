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
    int n;
    scanf("%d", &n);
    string d;
    cin >> d;
    int zeros = 0;
    int ones = 0;
    for(int i=0; i<n; i++) {
        if(d[i]=='0') {
            zeros++;
        } else {
            ones++;
        } 
    }
    printf("%d", max(zeros, ones)-min(zeros,ones));
    return 0;
}
