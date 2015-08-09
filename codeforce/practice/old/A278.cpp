#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int d[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &d[i]);
    }
    int s, t;
    scanf("%d %d", &s, &t);
    if(s==t) {
        printf("0");
        return 0;
    } else {
        int a = min(s, t);
        int b = max(s, t);
        int sum1 = 0;
        int sum2 = 0;
        for(int i=a; i<=b-1; i++) {
            sum1+=d[i-1];
        }
        for(int i=b; i<=n; i++) {
            sum2+=d[i-1]; 
        }
        for(int i=1; i<=a-1; i++) {
            sum2+=d[i-1];
        }
        printf("%d", min(sum1, sum2));
    }
    return 0;
}
