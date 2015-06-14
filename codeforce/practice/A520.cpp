#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int vals[210] = {0};
    char line[101];
    int n;
    scanf("%d", &n);
    scanf("%s", line);
    for(int i=0; i<n; i++) {
        char c = tolower(line[i]);
        vals[(int)c]++;
    }
    int count = 0;
    for(int i=0; i<210; i++) {
        if(vals[i]>0) {
            count++; 
        }
    }
    if(count>=26) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
