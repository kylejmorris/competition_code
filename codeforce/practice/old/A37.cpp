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
    int freq[1001] = {0};
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        freq[t-1]++;
    }
    int m = 0;
    int total = 0;
    for(int i=0; i<1001; i++) {
       m = max(freq[i], m); 
       if(freq[i]>0) {
          total++;
       }
    }
    printf("%d %d", m, total);
    return 0;
}
