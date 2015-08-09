#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class StringSegment {
    public:
        double average(string s) {
            int count = 1;
            int len = 1;
            vector<int> lens;
            for(int i=1; i<(int)s.size(); i++) {
                if(s[i]==s[i-1]) {
                    len++;
                }  else {
                    lens.push_back(len);
                    len = 1;
                }
            }
            lens.push_back(len);
            double sum = 0;
            for(int i=0; i<(int)lens.size(); i++) {
               sum+=lens[i]; 
            }
            return sum/count;
        }            
};
