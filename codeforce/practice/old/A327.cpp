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
    int ones = 0;
    int data[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &data[i]);
        if(data[i]==1) { ones++; }
    }
    int ma = 0;
    for(int i=0; i<n; i++) {
        int cur = ones;
        for(int j=i; j<n; j++) {
            if(data[j]==0) { cur++; } else { cur--; }
            ma = max(cur, ma);
        }
    }
    printf("%d", ma);

}
