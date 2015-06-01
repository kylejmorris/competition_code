#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<ctype.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int soldiers[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &soldiers[i]);
    }
    int hPos = 0;
    int hVal = -1;
    int mPos = 0;
    int mVal = 101;
    for(int i=0; i<=n-1; i++) {
        if(soldiers[i]<=mVal) {
            mVal = soldiers[i];
            mPos = i;
        }
        if(soldiers[n-1-i]>=hVal) {
            hVal = soldiers[n-1-i];
            hPos = n-1-i;
        }
    }
    int swaps = 0;
    if(hPos<mPos) {
        swaps = hPos + (n-1-mPos);
    } else if(mPos<hPos) {
        swaps = hPos + (n-1-mPos) - 1;
    } else if(mPos==hPos) {
        swaps = 0;
    }
    printf("%d", swaps);
    return 0;
}
