#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<stdlib.h>

using namespace std;

class AccountBalance {
    public:
        int processTransactions(int startingBalance, vector<string> transactions) {
            for(int i=0; i<(int)transactions.size(); i++) {
                char type = transactions[i][0];
                int val = stoi(transactions[i].substr(2, (int)transactions[i].size()));
                if(type=='C') {
                    startingBalance+=val;
                } else {
                    startingBalance-=val;
                }
            }
            return startingBalance;
        }
};
