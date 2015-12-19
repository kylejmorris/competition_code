#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class PrimalUnlicensedCreatures {
    public:
        int maxWins(int initial, vector<int> grezPower) {
            int power = initial;
            int index = 0;
            sort(grezPower.begin(), grezPower.end());
            while(index<(int)grezPower.size() && power>grezPower[index]) {
                power+=(grezPower[index]/2);
                index++;
            }
            return index;
        }     
};

