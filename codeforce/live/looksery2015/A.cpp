#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char data[n][m];
    for(int i=0; i<n; i++) {
        char line[m+1];
        scanf("%s", line);
        strcpy(data[i], line);
    } 
    int count = 0;
    string target = "acef";
    for(int r=1; r<n; r++) {
        for(int c=1; c<m; c++) {
            string word = "";
            word+=data[r][c-1];
            word+=data[r-1][c];
            word+=data[r][c];
            word+=data[r-1][c-1];
            sort(word.begin(), word.end());
            if(word==target) {
                count++;
            }
        } 
    }
    printf("%d", count);
    return 0;
}
