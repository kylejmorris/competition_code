#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int xdist = x1-x2;
    int ydist = y1-y2;
    if(xdist!=0 && ydist !=0) {
        if(abs(xdist)!=abs(ydist)) {
            printf("-1");
        } else {
            printf("%d %d %d %d", x1-xdist, y1, x1, y1-ydist); 
        }
    } else if(xdist==0 && ydist!=0) {
        printf("%d %d %d %d", x1-ydist, y1, x2-ydist, y2);
    } else if(xdist!=0 && ydist==0) {
        printf("%d %d %d %d", x1, y1-xdist, x2, y2-xdist);
    }
    return 0;
}
