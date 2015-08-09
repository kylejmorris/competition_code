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
    int odds = 0;
    int evens=0;
    for(int i=0; i<n; i++) {
        scanf("%d", &vals[i]);
        if(vals[i]%2==0) {
            evens++;
        } else {
            odds++;
        }
    }
    if(odds==1) {
        for(int i=0; i<n; i++) {
            if(vals[i]%2==1) {
                printf("%d", i+1);
            }
        }
    } else {
        for(int i=0; i<n; i++) {
            if(vals[i]%2==0) {
                printf("%d", i+1);
            }
        }

    }
    return 0;
}
