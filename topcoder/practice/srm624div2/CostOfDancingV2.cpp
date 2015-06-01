#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

class CostOfDancingV2 {
    public:
        int minimum(int k, vector<int> costs) {
            sort(costs.begin(), costs.end());
            int sum = 0;
            for(int i=0;i<k; i++) {
                sum+=costs[i]; 
            }
            return sum;
        }
};
