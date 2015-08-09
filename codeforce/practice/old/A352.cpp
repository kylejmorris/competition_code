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
    int fives = 0;
    int zeros = 0;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        if(temp==5) {
            fives++;
        } else {
            zeros++;
        }
    }
    if(zeros==0) {
        printf("-1");
    } else if(fives<9) {
        printf("0");
    } else {
        int count = fives/9;
        for(int i=0; i<count*9; i++) {
            putchar('5');
        }
        for(int i=0; i<zeros; i++) {
            putchar('0');
        }
    }
    return 0;
}
