#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class RosePetals {
    public:
        int getScore(vector<int> dice) {
            int score = 0;
            int weights[6] = {0, 0, 2, 0, 4, 0};
            for(int i=0; i<(int)dice.size(); i++) {
                score+=(weights[dice[i]-1]); 
            }
            return score;
        }
};
