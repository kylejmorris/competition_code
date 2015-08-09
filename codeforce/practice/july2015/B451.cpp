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
    bool increasing = true; 
    int n;
    scanf("%d", &n);
    int data[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &data[i]);
    }
    int a = 0;
    int b = n-1;
    int cdown = 0;
    int cup = 0;
    for(int i=0; i<n-1; i++) {
        if(data[i+1]<data[i]) {
            increasing = false;
        }
    }
    if(increasing) {
        printf("yes\n1 1");
    } else {
    increasing = true;

    for(int i=0; i<n-1; i++) {
        if(data[i+1]<data[i] && increasing) {
            cdown++;
            increasing = false;
            a = i;
        } else if(data[i+1]>data[i] && !increasing) {
            cup++;
            increasing = true;
            b = i;
        }
    }
    reverse(data+a, data+b+1);
    increasing = true;
    for(int i=0; i<n-1; i++) {
        if(data[i+1]<data[i]) {
            increasing = false;
        }
    }
    if(increasing) {
        printf("yes\n%d %d", a+1, b+1);
    } else {
        printf("no");
    }
    }
    return 0;
}
