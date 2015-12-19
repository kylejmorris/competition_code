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
    int vals[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &vals[i]); 
    }
    for(int i=0; i<n; i++) {
        int count = 1;
        for(int j=0; j<n; j++) {
            if(j!=i) {
                if(vals[j]>vals[i]) {
                    count++;
                }
            }
        }
        printf("%d ",count);
    }
    return 0;
}
