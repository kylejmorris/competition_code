#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

class WhiteCells {
    public:
        int countOccupied(vector<string> board) {
            int count = 0;
            for(int r=0; r<8; r++) {
                for(int c=0; c<8; c++) {
                    if((r+c)%2==0 && board[r][c]=='F') {
                        count++;
                    }
                }
            }
            return count;
        }
};
