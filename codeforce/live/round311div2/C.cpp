#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<limits.h>
#include<ctype.h>
#include<iostream>

using namespace std;

void displayMaps();
struct MAP {
    int count = 0;
    vector<int> costs;
};

struct MAP maps[100010];
int main() {
    int n;
    scanf("%d", &n);   
    int l[n];
    if(n==1) {
        printf("0");
    } else if(n==2) {
        scanf("%d %d", &l[0], &l[1]); //who cares about this
        int d1, d2;
        scanf("%d %d", &d1, &d2);
        cout << min(d1, d2);
    } else {
    for(int i=0; i<n; i++) {
        int li;
        scanf("%d", &li);
        maps[li].count++;
        l[i] = li;
    }
    for(int i=0; i<n; i++) {
        int cost;
        scanf("%d", &cost);
        int curlen = l[i];
        maps[curlen].costs.push_back(cost);
    }
    int mincost = INT_MAX;
    for(int i=0; i<n; i++) {
        int len = l[i];
        int cost = 0;
        sort(maps[len].costs.begin(), maps[len].costs.end());
        printf("counter %d", ((n+1)/2)-maps[len].count);
        if((n+1)/2-maps[len].count>0) {
        for(int j=0; j<maps[len].count; j++) {
            cost+=maps[len].costs[j];
        }
        } else {
            cost = 0;
        }
        printf("This will cost %d\n", cost);
        mincost = min(mincost, cost);
    }
    printf("%d", mincost);
    }
    return 0;
}

void displayMaps() {
    for(int i=0; i<100010; i++) {
        if(maps[i].count!=0) {
            printf("Costs of map %d: ", i);
            for(int j=0; j<maps[i].count; j++) {
                printf("%d ", maps[i].costs[j]);
            }
            printf("\n");
        }
    }
}
