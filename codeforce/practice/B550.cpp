#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    int n, l, r, x;
    int count = 0;
    scanf("%d %d %d %d", &n, &l, &r, &x);
    int vals[n]; 
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        vals[i] = temp;
    }
    for(int i=0; i<(1<<n); i++) {
        int big=-1;
        int small = 1000001;
        int sum = 0;
        for(int j=0; j<n; j++) {
            if((i&(1<<j))!=0) {
                sum+=vals[j];
                big = max(big, vals[j]);
                small = min(small, vals[j]);
            }
        }
        if(big-small>=x && sum>=l && sum<=r) {
            count++;
        } 
    }
    printf("%d", count);
}
