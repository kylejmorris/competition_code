#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class FoxAndGame {
    public:
        int countStars(vector<string> result) {
            int count = 0;
            for(int i=0; i<(int)result.size(); i++) {
                for(int c=0; c<3; c++) {
                    if(result[i][c]=='o') {
                        count++;
                    }
                }
            }
            return count;
        }
};
