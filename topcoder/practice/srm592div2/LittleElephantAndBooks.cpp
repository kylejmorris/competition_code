#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class LittleElephantAndBooks {
    public:
        int getNumber(vector<int> pages, int number) {
            int sum = 0;
            int index = 0;
            sort(pages.begin(), pages.end());
            while(index<number) {
                sum+=pages[index];
                index++;
            }
            sum-=pages[index-1];
            sum+=pages[index];
            return sum;
        }
        
};
