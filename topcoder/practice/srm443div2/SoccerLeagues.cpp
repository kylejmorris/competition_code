#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class SoccerLeagues {
    public:
    vector<int> points(vector<string> matches) {
        vector<int> points((int)matches.size(), 0);
        for(int r=0; r<(int)matches.size(); r++) {
            for(int c=0; c<(int)matches[r].size(); c++) {
                char cur = matches[r][c];
                if(cur=='W') {
                    points[r]+=3;
                } else if(cur=='D') {
                    points[r]+=1;
                    points[c]+=1;
                } else if(cur=='L') {
                    points[c]+=3;
                }
            }
        }
        return points;
    }
};
