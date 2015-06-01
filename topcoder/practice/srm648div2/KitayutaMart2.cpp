#include<stdio.h>
#include<vector>
#include<string.h>
#include<string>
#include<math.h>

using namespace std;

class KitayutaMart2 {
    public:
        int numBought(int k, int t) {
            int count = 1;
            int total = k;
            while(total<=t) {
                if(total==t) {
                    break;
                } else {
                    count++;
                    total+=(pow(2,count-1)*k);
                }
                    
            }
            return count;
        }
};
