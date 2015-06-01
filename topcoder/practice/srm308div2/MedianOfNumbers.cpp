#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class MedianOfNumbers {
    public:
        int findMedian(vector<int> numbers) {
            int size = numbers.size();
            sort(numbers.begin(), numbers.end());
            if(size%2==0) {
                return -1;
            } else {
                return numbers[size/2];
            }
        }
};
