#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int vals[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &vals[i]);
    }
    sort(vals, vals+n);
    int count = 0;
    for(int i=0; i<=n-3; i+=3) {
        if(vals[i]+k<=5 && vals[i+1]+k<=5 && vals[i+2]+k <=5) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
