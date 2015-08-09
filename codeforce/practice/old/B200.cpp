#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int x;
    scanf("%d", &x);
    double sum = 0.0;
    for(int i=0; i<x; i++) {
        int temp;
        scanf("%d", &temp); 
        sum+=(temp/100.0);
    }
    printf("%.9f", (sum/x)*100);
    return 0;
}
