#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int home[n];
    int away[n];
    for(int i=0; i<n; i++) {
        scanf("%d %d", &home[i], &away[i]);
    }
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(away[j]==home[i]) {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}
