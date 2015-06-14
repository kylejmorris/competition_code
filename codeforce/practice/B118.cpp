#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

void printFrom(int a, int b) {
    if(a>b) {
        for(int i=a; i>b; i--) {
            printf("%d ", i);
        }
        printf("%d",b);
    } else {
        for(int i=a; i<=b; i++) {
            printf("%d ", i);
        }
    }
}

void printSpaces(int n) {
    for(int i=0; i<n; i++) {
        printf("  ");
    }
}

int main() {
    int n;
    scanf("%d", &n);    
    for(int i=0; i<n; i++) {
        printf("  ");
    }
    printf("0\n");
    for(int i=0; i<n-1; i++) {
        printf("  ");
    }
    printf("0 1 0\n");
    for(int i=2; i<=n; i++) {
        printSpaces(n-i);
        printFrom(0, i);
        printFrom(i-1, 0);
        printf("\n");
    }
    for(int i=n-1; i>1; i--) {
        printSpaces(n-i);
        printFrom(0, i);
        printFrom(i-1, 0);
        printf("\n");
    }
    for(int i=0; i<n-1; i++) {
        printf("  ");
    }
    printf("0 1 0\n");
    for(int i=0; i<n; i++) {
        printf("  ");
    }
    printf("0");
}
