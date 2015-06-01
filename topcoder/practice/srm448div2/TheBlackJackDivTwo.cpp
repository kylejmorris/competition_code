#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class TheBlackJackDivTwo {
    public:
        int score(vector<string> cards) {
            int score = 0;
            for(int i=0; i<(int)cards.size(); i++) {
                char c = cards[i][0];
                if(c=='A') {
                    score+=11;
                } else if(c=='J' || c=='Q' || c=='K' || c=='T') {
                    score+=10;
                } else {
                    int val = c-'0';
                    score+=val;
                }
            }
            return score;
        }
};
