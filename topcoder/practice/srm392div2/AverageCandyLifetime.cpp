#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class AverageCandyLifetime {
    public:   
        double getAverage(vector<int> eatenCandies) {
            int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            int count = 0;
            double sum = 0;
            for(int i=0; i<12; i++) {
                int monthSum = 0;
                for(int j=i; j>=0; j--) {
                    monthSum+=months[j];
                }
                sum+=(monthSum*eatenCandies[i]);
                count+=eatenCandies[i];
            }
            return sum/count;
        }        
};
