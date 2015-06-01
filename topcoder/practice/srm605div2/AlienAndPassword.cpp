#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class AlienAndPassword {
    public:
        int getNumber(string s) {
            int count = 1;
            for(int i=0; i<(int)s.size(); i++) {
                if(s[i+1]!=s[i]) {
                    count++;
                }
            }
            return count;
        }
};
