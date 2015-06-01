#include<stdio.h>
#include<string.h>
#include<vector>
#include<string>

using namespace std;

int main() {
    int k,n,w;
    scanf("%d %d %d", &k, &n, &w);
    int cost = k*((w)*(w+1)/2) - n;
    if(cost<0) {
        printf("0");
    } else {
        printf("%d", cost);
    }
    return 0;
}
