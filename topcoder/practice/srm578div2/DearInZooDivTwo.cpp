#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class DearInZooDivTwo {
    public:
        vector<int> getminmax(int n, int k) {
            int x, y;
            if(k<=n) {
                x = n-k;
            } else {
                x = 0;
            }
            if(k!=0) {
                y = n-(k/2)-k%2;
            } else {
                y = n;
            }
            vector<int> result;
            result.push_back(x);
            result.push_back(y);
            return result;
        }
};
