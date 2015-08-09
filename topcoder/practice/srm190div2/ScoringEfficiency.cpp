#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class ScoringEfficiency {
    public:
        double getPointsPerShot(vector <string> gameLog) {
            int miss2 = 0;
            int miss3 = 0;
            int made2 = 0;
            int made3 = 0;
            int made = 0;
            int miss = 0;
            for(int i=0; i<(int)gameLog.size(); i++) {
                if(gameLog[i].find("free")!=string::npos) {
                    if(gameLog[i].find("missed")!=string::npos) {
                        miss++;
                    }  else {
                        made++;
                    }
                } else {
                    int val;
                    sscanf(gameLog[i].c_str(), "%d", &val);
                    if(gameLog[i].find("made")!=string::npos) {
                        if(val==2) {
                            made2++;
                        } else {
                            made3++;
                        }
                    } else {
                        if(val==2) {
                            miss2++;
                        } else {
                            miss3++;
                        }
                    }
                }
            }
            int total = gameLog.size();
            return (total)/(1.0*(made2+miss2+made3+miss3)+0.5*(made+miss));
        }
};
