#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int evens = 0;
    int odds = 0;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        if(temp%2==0) {
            evens++;
        } else {
            odds++;
        }
    }
    if(((n-k)==0 && (n-evens)%2==0)) {
        printf("Daenerys");
        return 0;
    } else if((n-k)==0 && evens%2!=0){
        printf("Stannis");
        return 0;
    }
    if((n-k)%2==0 && evens%2!=0) {
        printf("Stannis");
    } else if((n-k)%2!=0 && evens%2!=0) {
        printf("Stannis");
    }  else if((n-k)%2==0 && evens%2==0) {
        printf("Daenerys");
    } else {
        printf("Stannis");
    }

    return 0;
}
