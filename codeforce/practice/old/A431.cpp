#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

int main() {
    int t[4];
    for(int i=0; i<4; i++) {
        scanf("%d", &t[i]);
    } 
    char l[100002];
    scanf("%s", l);
    long sum = 0;
    for(int i=0; i<(int)strlen(l); i++) {
        sum+= t[l[i]-'0'-1];
    }
    cout << sum;
    return 0;
}
