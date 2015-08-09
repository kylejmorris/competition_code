#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int sum = 0;
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        sum+=t;
    }
    if(sum==0) {
        printf("0");
    } else {
        printf("%d", (abs(sum)-1)/x + 1);
    }
    return 0; 
}
