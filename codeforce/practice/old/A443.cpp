#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<ctype.h>

using namespace std;

int main() {
    char line[1001];
    fgets(line, 1001, stdin);
    int len = strlen(line);
    int letters[26] = {0};
    if(len<4) {
        printf("0");
    } else {
        for(int i=1; i<len; i=i+3) {
            int let = line[i]-'a';
            letters[let]++;
        }
        int count = 0;
        for(int i=0; i<26; i++) {
           if(letters[i]>0) {
                count++;
           }
        }
        printf("%d", count);
    }
    return 0;
}
