#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int getMax(int line[], int size) {
    int max = 0;
    int count = 0;
    if(line[0]==1) { max = 1; count = 1; } else { max = 0; count = 0; }
    for(int i=1; i<size; i++) {
        if(line[i]==1) {
            count++;
            if(count>max) { max = count; }
        } else {
            count = 0;
        }
    }
    return max;
}

int getAbsMax(int rows[], int n) {
    int max = 0;
    for(int i=0; i<n; i++) {
        if(rows[i]>max) { max = rows[i]; }
    }
    return max;
}

int main() {
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    int rowMaxes[n];
    int grid[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &grid[i][j]);
        }
        rowMaxes[i] = getMax(grid[i], m);
    }
    while(q>0) {
        int j, i;
        scanf("%d %d", &i, &j);
        j--; i--;
            if(grid[i][j]==0) { grid[i][j] = 1; } else { grid[i][j] = 0; }
            rowMaxes[i] = getMax(grid[i], m);
            printf("%d\n", getAbsMax(rowMaxes, n));
        q--;
    } 
    return 0;
}

