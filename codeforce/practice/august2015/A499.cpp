#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);    
    int l1, r1;
    int sum = 0;
    scanf("%d %d", &l1, &r1);

    sum+=((l1-1)%x);
    sum+=((r1-l1+1));
    for(int i=1; i<n; i++) {
        int l2, r2;
        scanf("%d %d", &l2, &r2);
        sum+=((l2-r1-1)%x);
        sum+=(r2-l2+1);
        l1 = l2;
        r1 = r2;
    }
    printf("%d", sum);
    return 0;
}
