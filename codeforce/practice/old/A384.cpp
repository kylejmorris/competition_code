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
    int total = 0;
    char grid[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(((i+1)+(j+1))%2==0) {
                grid[i][j] = 'C';
                total++;
            } else {
                grid[i][j] = '.';
            }
        }
    }
    printf("%d\n", total);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}
