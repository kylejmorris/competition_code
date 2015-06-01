#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int x, y;
    for(int r=1; r<=5; r++) {
        for(int j=1; j<=5; j++) {
            int temp;
            scanf("%d", &temp);
            if(temp==1) {
                x = j;
                y = r;
            }
        }
    }
    
    int moves = abs(x-3) + abs(y-3);
    printf("%d", moves);
    return 0;
}
