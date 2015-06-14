#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class FixedDiceGameDiv2 {
    public:
        double getExpectation(int a, int b) {
            int k, j;
            k = max(a, b);
            j = min(a,b);
            double sum = 0;
            int count = 0;
            while(k>j) {
                sum+=(k*j);
                count+=j;
                k--;
            }
            while(j>1) {
                sum+=(k*(j-1));
                count+=j;
                k--; j--;
            }
            return sum/count;
        }    
};
