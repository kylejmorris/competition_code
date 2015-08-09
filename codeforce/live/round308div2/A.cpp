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
    int sum = 0;
    for(int i=0; i<n; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        sum+=((y2-y1+1)*(x2-x1+1));
    }
    printf("%d", sum);
    return 0; 
}
