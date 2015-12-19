#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class SpeedTyper {
    string lettersToPractice(string letters, vector<int> times) {
        int previous = 0;
        int sum = 0;
        int diffs[(int)times.size()];
        for(int i=0; i<(int)times.size(); i++) {
            sum+=(times[i]-previous);
            diffs[i] = times[i]-previous;
            previous = times[i];
        }
        int average = sum/(int)times.size();
        string lets = "";
        for(int i=0; i<(int)times.size(); i++) {
            if(diffs[i]>average) {
                lets+=letters[i];
            }    
        }
        return lets;
    }
};

