#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class HuffmanDecoding {
    public:
        int getMatches(string s, vector<string> dic) {
            int count = 0;
            if((int)s.size()==0) {
                return (int)dic.size();
            }   
            for(int i=0; i<(int)dic.size(); i++) {
                if(dic[i].size()>=s.size() && dic[i].substr(0, (int)s.size())==s) {
                    count++;
                }
            }
            return count;
        }

        int getMatch(string s, vector<string> dic) {
            for(int i=0; i<(int)dic.size(); i++) {
                if(dic[i]==s) {
                    return i;
                }
            }
            return -1;
        }

        string decode(string archive, vector<string> dictionary) {
            int index =0;
            string str = "";
            string output = "";
            while(index<(int)archive.size()) {
                while(getMatches(str, dictionary)>1) {
                    index++;
                    str+=archive[index];
                }
                int m = getMatch(str, dictionary);
                output+=('A'+m);
                str = "";
                index++;
            }
            return output;
        }
};
