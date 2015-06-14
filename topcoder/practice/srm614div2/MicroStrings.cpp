#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class MicroStrings {
    public:
        string makeMicroString(int a, int d) {
            int i=0;
            string result = "";
            while(a-d*i>=0) {
               result+=to_string((a-d*i)); 
               i++;
            }
            return result;
        }        
};
