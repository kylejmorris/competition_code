#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d", &n);
    int a[n];
    int piles[n];
    scanf("%d", &a[0]);
    piles[0] = a[0];
    for(int i=1; i<n; i++) {
        scanf("%d", &a[i]);
        piles[i] = piles[i-1] + a[i];
    }
    scanf("%d", &m);
    int s[m];
    for(int i=0; i<m; i++) {
        scanf("%d", &s[i]);
    }
    for(int i=0; i<m; i++) {
            int low = 0;
            int high = n-1;
            int mid = (low+high)/2;
            while((piles[mid]<s[i] || piles[mid-1]>=s[i])) {
                if(piles[mid]<s[i]) {
                    low = mid+1;
                } else {
                    high = mid-1;
                }
                mid = (low+high)/2;
            }
            if(i+1>=m) {
                printf("%d", mid+1);
            } else {
                printf("%d\n", mid+1);
            }
    }
    return 0;
}
