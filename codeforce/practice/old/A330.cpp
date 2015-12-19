#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int validRow(int c, char grid[]) {
    int count = 0;
    for(int i=0; i<c; i++) {
        if(grid[i]!='S') {
            count++;
        } else {
            return -1;
        }
    } 
    return count;
}

int validCol(int r, char line[]) {
    int count = 0;
    for(int i=0; i<r; i++) {
        if(line[i]!='S') {
            count++;
        } else {
            return -1;
        }
    }
    return count;
}

int main() {
   int r, c;
   scanf("%d %d", &r, &c); 
   char grid[r][c+1];
   for(int i=0; i<r; i++) {
       scanf("%s", grid[i]);
   }
   int sum = 0;
   int rows = 0;

   for(int i=0; i<r; i++) {
        int curr = validRow(c, grid[i]);
        if(curr>0) {
            sum+=curr;
            rows++;
        }
   }
   for(int i=0; i<c; i++) {
       int count = 0;
       for(int ro=0; ro<r; ro++) {
            if(grid[ro][i]=='S') {
                count=-1;
                break;
            }  else {
                count++;
            }
       }
       if(count!=-1) {
        sum+=count-rows;
       }
   }

   printf("%d", sum);

}
