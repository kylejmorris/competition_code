#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

int main() {
    int n;
    int totalCost = 0;
    vector<int> s;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        s.push_back(temp);
    }
    sort(s.begin(), s.end());
    for(int i=1; i<n; i++) {
        int cost = s[i-1] - s[i] + 1;
        if(cost>0) {
            s[i]+=cost;
            totalCost+=cost;
        }
    }
    cout << totalCost;
    return 0;
}
