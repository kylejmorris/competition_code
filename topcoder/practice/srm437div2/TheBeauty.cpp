#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

class TheBeauty {
    public:
        int find(int n) {
            int count = 0;
            vector<int> vals(9, 0);
            while(n>0) {
               int cur = n%10; 
               vals[cur]++;
               n/=10;
            }
            for(int i=0; i<(int)vals.size(); i++) {
                if(vals[i]>0) {
                    count++;
                }
            }
            return count;
        }
};

