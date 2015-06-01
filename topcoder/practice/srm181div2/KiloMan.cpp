#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

class KiloMan {
    public:
        int hitsTaken(vector<int> pattern, string jumps) {
            int hits = 0;
            for(int i=0; i<(int)pattern.size(); i++) {
                if(jumps[i]=='S' && pattern[i]<=2) {
                    hits++;
                } else if(jumps[i]=='J' && pattern[i]>2) {
                    hits++;
                }
            }
            return hits;
        }
};
