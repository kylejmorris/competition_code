#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int sum = 0;
    for(int i=0; i<5; i++) {
        int temp;
        scanf("%d", &temp);
        sum+=temp;
    }
    if(sum%5==0 & sum!=0) {
        printf("%d", sum/5);
    }  else {
        printf("-1");
    }
    return 0;
}
