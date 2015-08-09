#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++) {
        if(i%2!=0) {
            for(int j=0; j<m; j++) {
                printf("#");
            }
        } else {
            if(i%4==0) {
                printf("#");
                for(int i=0; i<m-1; i++) {
                    printf(".");
                }
            } else {
                for(int i=0; i<m-1; i++) {
                    printf(".");
                }
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
