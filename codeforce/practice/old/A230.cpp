#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, s;
    scanf("%d %d", &s, &n);
    vector<int> x;
    vector<int> y;
    for(int i=0; i<n; i++) {
        int xr, yr;
        scanf("%d %d", &xr, &yr);
        x.push_back(xr);
        y.push_back(yr);
    }
    int valid = 1;
    while((int)x.size()>0 && valid) {
        int mindex = -1;
        int min = 100001;
        for(int i=0; i<(int)x.size(); i++) {
            if(x[i]<=min) {
                min = x[i];
                mindex = i;
            }
        }
        if(s>min) {
            x.erase(x.begin()+mindex);
            s+=y[mindex];
            y.erase(y.begin()+mindex);
        } else {
            valid = 0;
        }
    }
    if(!valid) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
