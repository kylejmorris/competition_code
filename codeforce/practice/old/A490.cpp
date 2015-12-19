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
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for(int i=0; i<n; i++) {
        int val;
        scanf("%d", &val);
        if(val==1) { a.push_back(i+1); }
        if(val==2) { b.push_back(i+1); }
        if(val==3) { c.push_back(i+1); }
    }
    int w = min(min((int)a.size(), (int)b.size()), (int)c.size());
    printf("%d\n", w);
    for(int i=0; i<w; i++) {
        printf("%d %d %d\n", a[i], b[i], c[i]);
    }
    return 0;
}
