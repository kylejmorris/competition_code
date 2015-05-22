#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

class GridGenerator {
    public:
        int generate(vector<int> row, vector<int> col) {
            int grid[row.size()][col.size()];       
            for(int i=0; i<(int)row.size(); i++) {
                grid[i][0] = row[i];
                grid[0][i] = col[i];
            }
            for(int r=1; r<(int)row.size(); r++) {
                for(int c=1; c<(int)col.size(); c++) {
                    grid[r][c] = grid[r-1][c] + grid[r][c-1] + grid[r-1][c-1];
                }
            }
            return grid[row.size()-1][row.size()-1];
        }
};
