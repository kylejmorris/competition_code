#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<ctype.h>
#include<algorithm>

using namespace std;

class MagicalStringDiv2 {
    public:
        int minimalMoves(string s) {
            int count = 0;
            for(int i=0; i<=(int)(s.size())/2-1; i++) {
               if(s[i]!='>') {
                    count++;
               }
               if(s[(int)s.size()-1-i]!='<') {
                    count++;
               }
            }
            return count;
        }
};
