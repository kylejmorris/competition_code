#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

class EasyHomework {
    public:
        string determineSign(vector<int> A) {
            int negs = 0;
            for(int i=0; i<(int)A.size(); i++) {
                if(A[i]==0) {
                    return "ZERO";
                } else if(A[i]<0) {
                    negs++;
                }
            }
            if(negs%2==0) {
                return "POSITIVE";
            } else {
                return "NEGATIVE";
            }   
        }
};
