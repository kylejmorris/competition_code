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
    char grid[n][n+1];
    for(int i=0; i<n; i++) {
        scanf("%s", grid[i]);
    }
    int moves[4][2] = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
    int count = 0;
    for(int r=0; r<n; r++) {
        for(int c=0; c<n; c++) {
            for(int m=0; m<4; m++) {
                if(r+moves[m][0]>=0 && r+moves[m][0]<n && c+moves[m][1]>=0 && c+moves[m][1]<n) {
                    if(grid[r+moves[m][0]][c+moves[m][1]]=='o') {
                        count++;
                    }
                }
            }
            if(count%2!=0 && count!=0) {
                printf("NO");
                return 0;
            }
        }        
    }
    printf("YES");
}
