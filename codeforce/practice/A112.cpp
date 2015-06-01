#include<stdio.h>
#include<string.h>
#include<vector>
#include<string>
#include<ctype.h>

using namespace std;

int main() {
    char str1[101];
    char str2[101];
    scanf("%s", str1);
    scanf("%s", str2);
    int len = strlen(str1);
    for(int i=0; i<len; i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    int cmp = strcmp(str1, str2);
    if(cmp<0) {
        printf("-1"); 
    } else if(cmp>0) {
        printf("1");
    } else {
        printf("0");
    } 
    return 0;
}
