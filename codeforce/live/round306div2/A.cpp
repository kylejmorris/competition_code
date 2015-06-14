#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    char s[100001];
    scanf("%s", s);
    int len = strlen(s);
    int index = 0;
    int foundAB = 0;
    int foundBA = 0;
    while(index<len-1) {
        if(s[index]=='A') {
            if(s[index+1]=='B' && !foundAB) {
                foundAB = 1;
                index++;
            }
        } else if(s[index]=='B' && s[index+1]=='A' && !foundBA) {
            foundBA = 1;
            index++;
        }
        index++;
    }
    if(foundAB && foundBA) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}


