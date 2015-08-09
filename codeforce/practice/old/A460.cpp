#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int count = 0;
    int day = 1;
    while(n>0) {
        count++;
        n--;
        if(day%m==0) {
            n++;
        }
        day++;
    }
    printf("%d", count);

    return 0;
}

