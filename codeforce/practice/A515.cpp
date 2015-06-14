#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<utility>

using namespace std;

int main() {
    int a, b, s;
    scanf("%d %d %d", &a, &b, &s);
    a = abs(a);
    b = abs(b);

    if(a+b>s) {
        printf("No");
    } else if(a+b==s) {
        printf("Yes");
    } else if(a+b<s) {
        if((s-(a+b))%2==0) {
            printf("Yes");
        } else {
            printf("No");
        }
    }
    return 0;
}
