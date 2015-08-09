#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class RoyalTreasurer {
    public:
        int minimalArrangement(vector<int> A, vector<int> B) {
            sort(A.begin(), A.end());
            sort(B.begin(), B.end());
            int sum = 0;
            for(int i=0; i<(int)A.size(); i++) {
                sum+=(A[A.size()-1-i]*B[i]);
            }
            return sum;
        }
};
