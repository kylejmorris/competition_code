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
    int pivot = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2; j++) {
            printf("%d %d ", pivot+1, n*n-pivot);
            pivot++;
        }
        printf("\n");
    }
}
