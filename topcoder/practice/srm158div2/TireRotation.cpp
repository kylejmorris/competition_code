#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

class TireRotation {
    public:
        int getCycle(string initial, string current) {
            int states[4][4] = {{0, 1, 2, 3,}, {3, 2, 0, 1}, {1, 0, 3, 2}, {2, 3, 1, 0}};
            for(int r=0; r<4; r++) {
                bool inState = true;
                for(int c=0; c<4; c++) {
                    if(current[c]!=initial[states[r][c]]) {
                        inState = false;
                        break;
                    }
                }
                if(inState) {
                    return r+1;
                }
            }
            return -1;
        }
};
