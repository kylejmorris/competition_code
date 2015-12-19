#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    vector<int> sellers;
    for(int i=0; i<n; i++) {
        int k;
        scanf("%d", &k);
        
        int mi = 9999999;
        for(int j=0; j<k; j++) {
            int temp;
            scanf("%d", &temp);
            mi = min(mi, temp); 
        }
        if(p>mi) {
            sellers.push_back(i+1);
        }
    }
    printf("%d\n", (int)sellers.size());
    for(int i=0; i<(int)sellers.size(); i++) {
        printf("%d ", sellers[i]);
    }
    return 0;
}
