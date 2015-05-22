#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class LetterStrings {
    public:
        int sum(vector<string> s) {
            int sum = 0;
            for(int i=0; i<(int)s.size(); i++) {
                int n = s[i].size();
                for(int c=0; c<n; c++) {
                    if(s[i][c]=='-') {
                        n--;
                    }
                }
                sum+=n;
            }
            return sum;
        }
};
