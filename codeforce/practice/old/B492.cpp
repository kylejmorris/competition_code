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
    int l;
    scanf("%d %d", &n, &l);
    vector<int> a;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    int previous = a[0];
    double mdist = 0.0;
    for(int i=1; i<n; i++) {
        if((a[i]-previous)/2.0>mdist) {
           mdist = (a[i]-previous)/2.0; 
        }
        previous = a[i];
    }
    int corner = max(l-previous, a[0]);
    if(corner>mdist) {
        printf("%d", corner);
    } else {
        printf("%.9f", mdist);
    }
    return 0;
}
