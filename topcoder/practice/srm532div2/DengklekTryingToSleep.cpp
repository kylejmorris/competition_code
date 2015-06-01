#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class DengklekTryingToSleep {
    public:
        int minDucks(vector<int> ducks) {
            sort(ducks.begin(), ducks.end());
            int min = ducks[0];
            int max = ducks[(int)ducks.size()-1];
            int missed = max-min+1-(int)ducks.size();
            return missed;
        }
};
