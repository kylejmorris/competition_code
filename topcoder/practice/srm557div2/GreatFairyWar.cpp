#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>
#include<ctype.h>

using namespace std;

class GreatFairyWar {
    public:
        int minHP(vector<int> dps, vector<int> hp) {
            int sum = 0;
            int damage = 0;
            for(int i=0; i<(int)dps.size(); i++) {
                sum+=dps[i];
            }
            while(hp.size()>0) {
                damage+=(sum*hp[0]);
                hp.erase(hp.begin());
                sum-=dps[0];
                dps.erase(dps.begin());
            }
            return damage;
        }
};
