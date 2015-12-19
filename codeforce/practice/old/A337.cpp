#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);  
    vector<int> vals;
    for(int i=0; i<m; i++) {
        int t;
        scanf("%d", &t);
        vals.push_back(t);
    }
    sort(vals.begin(), vals.end());
    int range = 1001;
    for(int i=0; i<=m-n; i++) {
        range = min(range, vals[i+n-1]-vals[i]);
    }
    printf("%d", range);
    return 0;
}
