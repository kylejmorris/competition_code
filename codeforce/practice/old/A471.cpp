#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;

int main() {
    int vals[10] = {0};
    for(int i=0; i<6; i++) {
        int temp;
        scanf("%d", &temp);
        vals[temp]++;
    }
    int valid = 0;
    for(int i=0; i<10; i++) {
        if(vals[i]>=4) {
            vals[i]-=4;
            valid = 1;
        } 
    }
    if(!valid) {
        printf("Alien");
    } else {
        int mi = 10;
        int ma = -1;
        for(int i=0; i<10; i++) {
            if(vals[i]>0 && i<mi) {
                mi = i;
            }
            if(vals[i]>0 && i>ma) {
                ma = i;
            }
        }
        if(mi!=ma) {
            printf("Bear");
        } else {
            printf("Elephant");
        }
    }
    return 0;
}
