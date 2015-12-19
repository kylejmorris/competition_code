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
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    double mish = max((3*a)/10.0, a-(a/250.0)*c);
    double vas = max((3*b)/10.0, b-(b/250.0)*d);
    if(mish==vas) {
        printf("Tie");
    } else if(mish>vas) {
        printf("Misha");
    } else {
        printf("Vasya");
    }
    return 0;
}
