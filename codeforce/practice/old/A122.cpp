#include<stdio.h>
#include<string>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    int vals[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    scanf("%d", &n);
    for(int i=0; i<14; i++) {
        if(n%vals[i]==0) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
