#include<stdio.h>
#include<string.h>
#include<vector>
#include<math.h>
using namespace std;

class CostOfDancing {
    public:
        int minimum(int k, vector<int> costs) {
            int sum = 0;
            while(k>0) {
                int min = 1001;
                int minPos = -1;
                for(int i=0; i<(int)(costs.size()); i++) {
                    if(costs.at(i)<=min) {
                        min = costs.at(i); 
                        minPos = i;
                    } 
                }
                costs.erase(costs.begin() + minPos);
                sum+=min;
                k--;
            }
            return sum;
        } 
}
