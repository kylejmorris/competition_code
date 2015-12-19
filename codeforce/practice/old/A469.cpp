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
    vector<int> data(n, 0);
    int p, q;
    scanf("%d", &p);
    for(int i=0; i<p; i++) {
        int val;
        scanf("%d", &val);
        data[val-1]++;
    }
    scanf("%d", &q);
    for(int i=0; i<q; i++) {
        int val;
        scanf("%d", &val);
        data[val-1]++;
    }
    for(int i=0; i<n; i++) {
        if(data[i]==0) {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
