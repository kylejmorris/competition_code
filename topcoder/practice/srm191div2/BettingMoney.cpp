#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class BettingMoney {
    public:
        int moneyMade(vector<int> amounts, vector<int> centsPerDollar, int finalResult) {
            int cents = 0;
            for(int i=0; i<(int)amounts.size(); i++) {
                if(i!=finalResult) {
                    cents+=amounts[i]*100;
                } else {
                    cents-=amounts[i]*centsPerDollar[i];
                }
            }
            return cents;
        }
};
