#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int vals[m];
    for(int i=0; i<m; i++) {
        scanf("%d", &vals[i]);
    }
    int f;
    scanf("%d", &f);
    int friends = 0;
    for(int i=0; i<m; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if((f&(1<<j))!=(vals[i]&(1<<j))) {
                count++;
            }
        }
        if(count<=k) {
            friends++;
        }
    }
    printf("%d", friends);
    return 0;
}
