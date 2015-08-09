#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<string> grid;
    int k = n/2;
    int row = 1;
    while(k>=0) {
        string temp(k, '*');
        temp.append((2*row-1), 'D');
        temp.append(k, '*');
        grid.push_back(temp);
        printf("%s\n", grid[row-1].c_str());
        k--;
        row++;
    }
    for(int i = n/2 - 1; i>=0; i--) {
        printf("%s\n", grid[i].c_str());
    }
    return 0;
}
