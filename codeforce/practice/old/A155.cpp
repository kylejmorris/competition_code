#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n;
    int mi, ma;
    scanf("%d", &n);
    int val;
    int count = 0;
    scanf("%d", &val);
    mi = val; ma = val;
    for(int i=1; i<n; i++) {
        scanf("%d", &val);
        if(val<mi) {
            mi = val; 
            count++;
        } else if(val>ma) {
            ma = val;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
