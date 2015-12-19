#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;
#define MAXSIZE 1005 
#define MOD 1000000007
int main() {
    long long pascal[MAXSIZE][MAXSIZE]= {0};
    //making triangu
    pascal[0][0] = 1;
    for(int i=1; i<MAXSIZE; i++) {
        pascal[i][0] = 1;
        for(int j=1; j<MAXSIZE; j++) {
            pascal[i][j] = (pascal[i-1][j] + pascal[i-1][j-1])%MOD;
        }
    }
    int k;
    scanf("%d", &k);
    int c[k];
    long long product = 1;
    long long total = 0;
    for(int i=0; i<k; i++) {
        scanf("%d", &c[i]);
        product = (product*pascal[total+c[i]-1][c[i]-1])%MOD;
        total+=c[i];
    }
    cout << product;
}
