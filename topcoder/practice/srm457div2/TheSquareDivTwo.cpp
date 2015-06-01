#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>

using namespace std;

class TheSquareDivTwo {
    public:
        vector<string> solve(vector<string> board) {
            vector<string> cols;
            for(int i=0; i<(int)board.size(); i++) {
                string dots, c;
                for(int j=0; j<(int)board[i].size(); j++) {
                    char current = board[i][j];
                    if(current=='.') { dots+=current; } else { c+=current; }
                }
                cols.push_back(dots+c);
            }
            vector<string> actual;
            for(int r=0; r<(int)board.size(); r++) {
                for(int c=0; c<(int)board.size(); c++) {
                    actual[c][r] = cols[r][c];
                }      
            }
            return actual;
        }
};
