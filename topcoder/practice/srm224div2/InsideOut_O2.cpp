#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

class InsideOut {
    public:
        string unscramble(string line) {
            string result(line);
            reverse(result.begin(), result.begin()+line.size()/2);
            return result;
        }
};
