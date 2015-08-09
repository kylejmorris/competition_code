#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, d;
    scanf("%d %d", &n, &d);
    int t[n];
    int sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &t[i]);
        sum+=t[i];
    }
    sum+=(n-1)*10;
    if(sum>d) {
        printf("-1");
    } else {
       int jokes = (n-1)*2 + (d-sum)/5; 
       printf("%d", jokes);
    }
    return 0;
}
