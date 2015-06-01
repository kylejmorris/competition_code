#include<stdio.h>
#include<vector>

using namespace std;

class Soccer {
    public:
        int maxPoints(vector<int> wins, vector<int> loss) {
            int max = 0; 
            for(int i=0; i<(int)wins.size(); i++) {
                int temp = wins[i]*3 + loss[i];           
                if(temp>max) {
                    max = temp;
                }
            }
            return max;
        }
};


