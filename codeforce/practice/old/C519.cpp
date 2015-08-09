#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m); 
    int count = 0;
    bool valid = true;
    while(valid) {
        if(n<m) {
            if(n>0 && m>=2) {
                n--; m-=2; count++;
            } else {
                valid = false;
            }
        } else {
            if(m>0 && n>=2) {
                m--; n-=2; count++;
            } else {
                valid = false;
            }
        }
    }
    printf("%d", count);
    return 0;
}
