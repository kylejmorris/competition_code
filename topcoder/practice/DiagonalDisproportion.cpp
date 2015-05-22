#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;
class DiagonalDisproportion {
    public:
        int getDisproportion(vector<string> matrix) {
            int sum = 0;
            for(int r=0; r<matrix.size(); r++) {
                char a = matrix[r][r];
                int val = a-'0';
                sum+=val;
            }
            for(int r=matrix.size()-1; r>=0; r--) {
                char a = matrix[r][matrix.size()-1-r];
                int val = a-'0';
                sum-=val;
            }
            return sum;
        }

};

