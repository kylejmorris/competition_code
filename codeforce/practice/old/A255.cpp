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
    int e[3] = {0};
    int count = 0;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        e[count++]+=temp; 
        if(count>=3) {
            count = 0;
        }
    }
    if(e[0]>e[1] && e[0]>e[2]) {
        printf("chest");
    } else if(e[1]>e[0] && e[1]>e[2]) {
        printf("biceps");
    } else {
        printf("back");
    }
   return 0; 
}
