#include<stdio.h>
#include<string.h>
#include<string>
#include<ctype.h>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    vector<int> coins;
    int csum = 0;
    int sum = 0;
    int ccount = 0;
    scanf("%d", &n);
    for(int i=0; i<(int)n; i++) {
        int cur;
        scanf("%d", &cur);
        coins.push_back(cur);
        sum+=cur;
    }
    sort(coins.begin(), coins.end()); 
    while(csum<=sum) {
        csum+=(coins[coins.size()-1]);
        sum-=(coins[coins.size()-1]); 
        coins.erase(coins.begin()+coins.size()-1);
        ccount++;
    }
    printf("%d", ccount);
    return 0;
}
