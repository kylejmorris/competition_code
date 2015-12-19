#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> vals;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        vals.push_back(temp);
    }
    sort(vals.begin(), vals.end());
    for(int i=0; i<n; i++) {
        printf("%d ", vals[i]);
    }
    return 0;
}
