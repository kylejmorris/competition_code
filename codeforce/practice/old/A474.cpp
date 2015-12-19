#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    char chars[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int charslen = strlen(chars);
    char move;
    scanf("%c", &move);
    char line[101];
    scanf("%s", line);
    int len = strlen(line);
    for(int i=0; i<len; i++) {
        int found = -1;
        for(int j=0; j<charslen; j++) {
            if(chars[j]==line[i]) {
                found = j;
            }
        }
        if(move=='R') {
            printf("%c", chars[found-1]);
        } else {
            printf("%c", chars[found+1]);
        }
    }
    return 0;
}
