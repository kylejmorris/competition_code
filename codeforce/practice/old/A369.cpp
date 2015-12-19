#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int dish1 = m;
    int dish2 = k;
    int count = 0;
    for(int i=0; i<n; i++) {
        int a;
        scanf("%d", &a);
        if(a==1) {
            if(dish1==0) {
                count++; 
            } else {
                dish1--;
            }
        }
        if(a==2) {
            if(dish2==0) {
                if(dish1==0) {
                    count++;
                } else {
                    dish1--;
                }
            } else {
                dish2--;
            }
        }
    }
    printf("%d", count);
}
