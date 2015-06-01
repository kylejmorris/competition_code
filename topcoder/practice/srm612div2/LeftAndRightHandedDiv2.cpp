#include<stdio.h>
#include<string>
#include<vector>
#include<string.h>

using namespace std;

class LeftAndRightHandedDiv2 {
    public:
        int count(string s) {
            int col = 0;
            for(int i=1; i<(int)s.size()-1; i++) {
                if(s[i]=='R' && s[i+1] == 'L') {
                    col++;
                }
    
            }
            return col;
        }
};

