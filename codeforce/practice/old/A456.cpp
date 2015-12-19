#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<utility>

using namespace std;

int main() {
    vector<pair<int, int> > laptops; 
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        pair<int, int> laptop;
        scanf("%d %d", &laptop.first, &laptop.second);
        laptops.push_back(laptop);
    }
    sort(laptops.begin(), laptops.end());
    bool valid = true;
    for(int i=1; i<=n-1; i++) {
        if(laptops[i].second<laptops[i-1].second && (laptops[i].first>laptops[i-1].first)) {
            valid = false;
            break;
        }
    }
    if(!valid) {
        printf("Happy Alex");
    } else {
        printf("Poor Alex");
    }
    return 0;
}
