#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int getMin(vector<int> vals) {
    int mindex = -1;
    int min;
    for(int i=0; i<(int)vals.size(); i++) {
        if(vals[i]<min && vals[i]!=-1) {
            min = vals[i];
            mindex = i+1;
            vals[i] = -1;
        }
    }
    return mindex;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k); 
    vector<int>vals(n, 0);
    for(int i=0; i<n; i++) {
        scanf("%d", &vals[i]);
    }
    int count = 0;
    vector<int> indices;
    while(k>0 && (n-count)>0) {
        int mindex = -1;
        int min = 99999999;
        for(int i=0; i<(int)vals.size(); i++) {
            if(vals[i]<min && vals[i]!=-1) {
                min = vals[i];
                mindex = i+1;
            }
        }
        if(k-vals[mindex-1]<0) {
            k = 0;
        } else {
            k-=vals[mindex-1];
            indices.push_back(mindex);
            count++;
        }
        vals[mindex-1] = -1;
    }
    if(count>0) {
        printf("%d\n", count);
    } else {
        printf("%d", count);
    }
    for(int i=0; i<(int)indices.size(); i++) {
        printf("%d ", indices[i]);
    }
    return 0;
}
