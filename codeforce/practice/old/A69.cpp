#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    for(int i=0; i<n; i++) {
        int x,y,z;
        scanf("%d %d %d", &x, &y, &z);
        sumx+=x; sumy+=y; sumz+=z;
    }
    if(sumx!=0 || sumy!=0 || sumz!=0) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
