#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class MiddleCode {
    public:
        string encode(string s) {
            string t;
            while(s.size()>0) {
                if(s.size()%2!=0) {
                    char middle = s[s.size()/2]; 
                    t+=middle;
                    s.erase(s.begin()+s.size()/2);
                } else if (s.size()%2==0) {
                    char a = s[(s.size()-1)/2];
                    char b = s[s.size()/2];
                    if(a<b) {
                        t+=a;
                        s.erase(s.begin()+(s.size()-1)/2);
                    } else {
                        t+=b;
                        s.erase(s.begin()+s.size()/2);
                    }
                }
            }
            return t;
        }


}; 
