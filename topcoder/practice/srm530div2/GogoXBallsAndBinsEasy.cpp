#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class GogoXBallsAndBinsEasy {
    public:
        int solve(vector<int> T) {
            int count = 0;
            int n = (int)T.size();
            for(int i=0; i<(int)n/2; i++) {
                count+=(T[n-1-i]-T[i]);
            }
            return count;
        }
};

