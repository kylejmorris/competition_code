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
    int a=0;
    int b=0;
    int c=0;
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        if(t==25) {
            a++;
        } else if(t==50) {
            if(a>=1) {
                a--;
                b++;
            } else {
                printf("NO");
                return 0;
            }
        } else if(t==100) {
            if((b>=1 && a>=1)) {
                b--;
                a--;
                c++;
            } else if(a>=3){
                a-=3;
                c++;
            } else {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
