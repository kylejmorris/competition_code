#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<limits.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n, w;
    scanf("%d %d", &n, &w);
    vector<int> a;
    for(int i=0; i<2*n; i++) {
        int t;
        scanf("%d", &t);
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    double min1 = w/(3.0*n);
    double min2 = a[0];
    double min3 = a[n]/2.0;
    cout << setprecision(7) << 3*n*min(min(min1, min2), min3);
    return 0;
}
