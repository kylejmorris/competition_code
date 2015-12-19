#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<ctype.h>

using namespace std;

int main() {
    char letters[101];
    char word[7] = "hello";
    scanf("%s", letters);
    int len = strlen(letters);
    int index = 0;
    bool valid = true;
    for(int i=0; i<5; i++) {
       while(letters[index]!=word[i] && valid) {
            index++;
            if(index>=len) {
                valid = false;
            }
       } 
       index++;
    }
    if(!valid) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}

