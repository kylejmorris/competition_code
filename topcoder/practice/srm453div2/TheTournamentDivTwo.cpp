#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<ctype.h>
#include<utility>

using namespace std;

class TheTournamentDivTwo {
    public:
        int find(vector<int> points) {
            int sum = 0;
            for(int i=0; i<(int)points.size(); i++) {
                sum+=points[i];
            }
            if(sum%2!=0) {
                return -1;
            } else {
                return sum/2;
            }
        }
};
