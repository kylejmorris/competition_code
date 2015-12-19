#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<ctype.h>

using namespace std;

int main() {
    char ch1[101];
    char ch2[101];
    scanf("%s %s", ch1, ch2);
    if(strlen(ch1)!=strlen(ch2)) {
        printf("NO");
        return 0;
    }  
    int index = 0;
    int len = strlen(ch1);
    while(index<len) {
        if(ch1[index]!=ch2[len-1-index]) {
            printf("NO");
            return 0;
        }
        index++;
    }
    printf("YES");
    
    return 0;
}
