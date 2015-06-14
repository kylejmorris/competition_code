#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t>0) {
        int a;
        scanf("%d", &a);
        int n;
        double b;
        n = (-360.0)/(a-180);
        b = (-360.0)/(a-180);
        if(n==b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        t--;
    }
    return 0;
}
