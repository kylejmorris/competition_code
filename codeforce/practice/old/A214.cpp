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
    int n, m;
    scanf("%d %d", &n, &m);
    vector<pair<int, int> > pairs;
    int maxa = sqrt(n);
    int maxb = n;
    for(int ai=0; ai<=maxa; ai++) {
        for(int bi=0; bi<=maxb; bi++) {
            if(pow(ai,2)+bi>n) { break; }
            if(pow(ai,2)+bi==n) {
                pair<int,int> p;
                p.first = ai;
                p.second = bi;
                pairs.push_back(p);
            } 
        }
    }
    int count = 0;
    for(int i=0; i<(int)pairs.size(); i++) {
        if(pairs[i].first+pow(pairs[i].second, 2)==m) {
            count++;
        } 
    }
    printf("%d", count);
    return 0;
}
