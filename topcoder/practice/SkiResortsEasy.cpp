#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class SkiResortsEasy {
    public:
        int minCost(vector<int> altitude) {
            int cost = 0;
            for(int i=1; i<(int)altitude.size(); i++) {
                if(altitude[i]>altitude[i-1]) {
                    cost+=(altitude[i]-altitude[i-1]);
                    altitude[i] = altitude[i-1];
                }
            }
            return cost;
        }
};
