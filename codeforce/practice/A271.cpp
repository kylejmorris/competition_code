#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
bool isDistinct(int n) {
    int vals[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(n>0) {
        int d = n%10;
        vals[d]++;
        if(vals[d]>=2) { return false; }
        n/=10;
    }
    return true;
}

int main() { 
    int y;
    scanf("%d", &y); 
    y++;
    while(!isDistinct(y)) {
        y++;
    }
    printf("%d", y);
    return 0;
}
