#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

class TypingDistance {
    public: 
        int minDistance(string keyboard, string word) {
            int distance = 0;
            for(int i=1; i<(int)word.length(); i++) {
                int a = keyboard.find(word[i]);
                int b = keyboard.find(word[i-1]);
                distance+=(abs(a-b));
            }
            return distance;
        }
};
