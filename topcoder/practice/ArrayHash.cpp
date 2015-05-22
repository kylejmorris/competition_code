#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class ArrayHash {
    public:
        int getHash(vector<string> input) {
            int hash = 0;
            for(int i=0; i<(int)input.size(); i++) {
                for(int c=0; c<(int)input[i].size(); c++) {
                    int chVal = input[i][c]-'A';
                    hash+=(chVal+i+c);
                }
            }
            return hash;
        }
};
