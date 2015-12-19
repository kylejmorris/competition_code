#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

class Justifier {
    public:
        vector<string> justify(vector<string> textIn) {
            int m = 0;
            for(int i=0; i<(int)textIn.size(); i++ ) {
                m = max((int)textIn[i].size(), m);
            }
            for(int i=0; i<(int)textIn.size(); i++) {
                string n = "";
                while(((int)n.size() + (int)textIn[i].size())<m) {
                    n+=" ";
                }
                textIn[i] = n + textIn[i];
          
            }
            return textIn;
        }
};
