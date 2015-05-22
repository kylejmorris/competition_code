#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

class InsideOut {
    public:
        string unscramble(string line) {
            int size = line.size();
            string changed = "";
            for(int i=(size/2)-1; i>=0; i--) {
                changed+=line[i];
            }
            for(int k=(size/2); k<size; k++) {
                changed+=line[k];
            /
            return changed;
        }
        
};
