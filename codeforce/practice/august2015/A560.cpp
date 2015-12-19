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
    for(int a=0; a<n; a++) {
        int temp;
        scanf("%d", &temp);
        if(temp==1) {
            printf("-1");
            return 0;
        }
    }
    printf("1");
    return 0;
}
