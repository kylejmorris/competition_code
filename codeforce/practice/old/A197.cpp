#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<vector>
#include<string>

using namespace std;

int main() {
    char line[101];
    scanf("%s", line);
    int len = strlen(line);
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int total = 0;
    for(int i=0; i<len; i++) {
       if(line[i]=='1') {
            ones++; total++;
       }  else if(line[i]=='2') {
            twos++; total++;
       } else if(line[i]=='3') {
            threes++; total++;
       } 
    }
    while(total>1) {
        if(ones>0) {
            printf("1+"); ones--;
        } else if(twos>0) {
            printf("2+"); twos--;
        } else {
            printf("3+"); threes--;
        }
        total--;
    }
    if(ones>0) {
        printf("1");
    } else if(twos>0) {
        printf("2");
    } else {
        printf("3");
    }

    return 0;
}
