#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main() {
    FILE *input = stdin;
    int n, m, k;
    fscanf(input, "%d %d %d", &n, &m, &k);
    int grid[n][m];
    int directions[4][3][2] = { { {-1, -1}, {-1, 0}, {0, -1}},{{0,-1}, {1, -1},{1,0}}, {{-1,0}, {-1, 1}, {0,1}}, {{0,1}, {1,0},{1, 1}}};
    int coords[k][2];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            grid[i][j] = 0;
        }
    }
    for(int i=0; i<k; i++) {
        fscanf(input, "%d %d", &coords[i][0], &coords[i][1]);
    }

    for(int move=0; move<k; move++) {
        int i = coords[move][0]-1;
        int j = coords[move][1]-1;
        grid[i][j] = 1;
        for(int d=0; d<4; d++) {
            int count = 1;
            for(int f=0; f<3; f++) {
                if(i+directions[d][f][0]>=0 && i+directions[d][f][0]<n && j+directions[d][f][1]>=0 && j+directions[d][f][1]<m) {
                    if(grid[i+directions[d][f][0]][j+directions[d][f][1]]==1) {
                        count++; 
                    }
                }
            }
            if(count==4) {
                /*for(int x=0; x<n; x++) {
                    for(int y=0; y<m; y++) {
                        printf("%d ", grid[x][y]);
                    }
                    printf("\n");
                }*/
                printf("%d", move+1);
                return 0;
            }
        }
    } 
    printf("0");
    return 0; 
}
