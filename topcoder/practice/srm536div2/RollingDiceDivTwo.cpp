#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

class RollingDiceDivTwo {
    public:
        int minimumFaces(vector<string> rolls) {
            int sum = 0;
            for(int i=0; i<(int)rolls.size(); i++) {
                sort(rolls[i].begin(), rolls[i].end());
            }
            for(int c=0; c<(int)rolls[0].size(); c++) {
                int max = 0;
                for(int r=0; r<(int)rolls.size(); r++) {
                    int val = rolls[r][c]-'0';
                    if(val>max) { max = val; }
                }
                sum+=max;
            }
            return sum;
        }
};
