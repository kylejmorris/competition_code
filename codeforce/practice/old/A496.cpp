#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>

using namespace std;

int findMax(vector<int> data) {
    int ma = 0;
    for(int i=1; i<=(int)(data.size())-1; i++) {
        ma = max(ma, data[i]-data[i-1]);  
    }
    return ma;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a;
    for(int i=0; i<n; i++) {
        int ai;
        scanf("%d", &ai);
        a.push_back(ai);
    }
    int mi = 9999;
    for(int i=1; i<n-1; i++) {
        int temp = a[i];
        a.erase(a.begin()+i);
        mi = min(mi, findMax(a)); 
        a.insert(a.begin()+i, temp); 
    }
    printf("%d", mi);
    return 0;
}
