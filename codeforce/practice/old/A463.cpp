#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int s, n;
    scanf("%d %d", &n, &s);
    s*=100;
    int costs[n];
    for(int i=0; i<n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        costs[i]= x*100 + y;
    }
    int maxcost = 0;
    bool canbuy = false;
    for(int i=0; i<n; i++) {
        if(s>=costs[i]) {
            maxcost = max(maxcost, (s-costs[i])%100); 
            canbuy = true;
        }
    }
    if(canbuy) {
        printf("%d", maxcost);
    } else {
        printf("-1");
    }
    return 0;
}
