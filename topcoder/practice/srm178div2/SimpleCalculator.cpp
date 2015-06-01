#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class SimpleCalculator {
    public:
        int calculate(string input) {
            int pos = -1;
            for(int i=0; i<(int)input.size(); i++) {
                if(input[i]<'0' || input[i]>'9') { pos = i; break;}
            }
            int a = atoi(input.substr(0, pos).c_str());
            int b = atoi(input.substr(pos+1, (int)input.size()).c_str());
            if(input[pos]=='*') {
                return a * b;
            } else if(input[pos]=='+') {
                return a+b;
            } else if(input[pos]=='-') {
                return a-b;
            } else {
                return a/b;
            }
        }
};
