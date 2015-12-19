#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int turn = 1;
    while(n>0 && m>0) {
        n--; m--;
        turn++;
    }
    if(turn%2==0) {
        printf("Akshat");
    } else {
        printf("Malvika");
    }
    return 0;
}
