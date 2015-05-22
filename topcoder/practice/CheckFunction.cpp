#include<stdio.h>
#include<string>

using namespace std;

class CheckFunction {
    public:
        int newFunction(string code) {
            char *c = code.data();
            int adds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
            int sum = 0;
            for(unsigned long i=0; i<code.length(); i++) {
                int val = code[i]-'0';
                sum+=adds[val];

            }
            return sum;
        }
};

