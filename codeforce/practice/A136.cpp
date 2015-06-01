#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int vals[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &vals[i]);
    }
    for(int j=0; j<n; j++) {
        int pos = 0;
        while(pos<n) {
            if(vals[pos]==j+1) {
                break;
            }
            pos++;
        }
        printf("%d ", pos+1);
    }
    return 0;
}
