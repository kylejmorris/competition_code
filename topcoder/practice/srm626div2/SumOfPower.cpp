#include<stdio.h>
#include<string>
#include<vector>
#include<string.h>
#include<ctype.h>
#include<algorithm>

using namespace std;

class SumOfPower {
    public:   
        int findSum(vector<int> data) {
            int curSum = 0;
            int totalSum = 0;
            int index = 0;
            while(index<(int)data.size()) {
                curSum=0;
                for(int i=index; i<(int)data.size(); i++) {
                    curSum+=data[i];
                    totalSum+=curSum; 
                }
                index++;
            }
            return totalSum;
        }

};

