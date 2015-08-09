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
    int a, b;
    scanf("%d %d", &a, &b);    
    int pa = 0;
    int pb = 0;
    int tie = 0;
    for(int i=1; i<=6; i++) {
        if(abs(a-i)==abs(b-i)) {
            tie++;
        } else if(abs(a-i)<abs(b-i)) {
            pa++;
        } else {
            pb++;
        }
    }
    printf("%d %d %d", pa, tie, pb);
    return 0;
}
