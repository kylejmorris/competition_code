#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int hi;
    int mi;
    scanf("%d %d", &hi, &mi);
    int count = 1;
    int maxcount = 1;
    for(int i=1; i<n; i++) {
        int hnew, mnew;
        scanf("%d %d", &hnew, &mnew);
        if(hnew==hi && mnew==mi) {
            count++;
            maxcount = max(count, maxcount);
        } else {
            count = 1;
        }
        hi = hnew; mi = mnew;
    }
    printf("%d", maxcount);
    return 0;
}
