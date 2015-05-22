#include<stdio.h>
#include<vector>
#include<string.h>
#include<string>

using namespace std;

int main() {
    int count =0;
    int n;
    scanf("%d", &n);
    while(n>0) {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c>=2) {
            count++;
        }
        n--;
    }
    printf("%d", count);
    return 0;
}
