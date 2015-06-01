#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class GreaterGameDiv2 {
    public:
        int calc(vector<int> snuke, vector<int> sloth) {
            int count = 0;
            for(int i=0; i<(int)snuke.size(); i++) {
                if(snuke[i]>sloth[i]) {
                    count++;
                }
            } 
            return count;
        }
};
