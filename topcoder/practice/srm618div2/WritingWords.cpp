#include<stdio.h>
#include<string>

using namespace std;

class WritingWords {
    public:
        int write(string word) {
            int taps = 0;
            for(int i=0; i<(int)word.size(); i++) {
                taps+=(word[i]-'A'+1);
            }
            return taps;
        }
};

