#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class TopFox {
    public:
        int possibleHandles(string familyName, string givenName) {
            int count = 0;
            string s = "";
            vector<string> words;
            for(int i=0; i<(int)familyName.size(); i++) {
                s+=familyName[i];
                string temp = s;
                for(int j=0; j<(int)givenName.size(); j++) {
                    temp+=givenName[j];
                    if(find(words.begin(), words.end(), temp)!=words.end()) {
                        words.push_back(temp);
                        count++;
                    }
                }
            }
            return count;
        }
};
