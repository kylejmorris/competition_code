#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<ctype.h>

using namespace std;

class KiwiJuiceEasy {
    public:
        vector<int> thePouring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId) {
            for(int i=0; i<(int)fromId.size(); i++) {
                int to = toId[i];
                int from = fromId[i];
                int change = capacities[to]-bottles[to];
                if(bottles[from]>change) {
                    bottles[from]-=change;
                    bottles[to] = capacities[to];
                } else {
                    bottles[to]+=bottles[from];
                    bottles[from] = 0;
                }
            }
            return bottles;
        }
};
