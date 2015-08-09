#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int data[n][n];
    for(int i=0; i<n; i++) {
        data[i][0] = 1;
        data[0][i] = 1;
    }
    for(int r=1; r<n; r++) {
        for(int c=1; c<n; c++) {
            data[r][c] = data[r-1][c] + data[r][c-1];
        }
    }
    printf("%d", data[n-1][n-1]);
    return 0;
}


