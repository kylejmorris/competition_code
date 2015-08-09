#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char n[101];
    scanf("%s", n);
    int len = strlen(n);
    bool found = false;
    for(int i=1; i<len; i++) {
        if(islower(n[i])) {
            found = true;
            break;
        }
    } 
    if(!found) {
       for(int i=0; i<len; i++) {
            if(islower(n[i])) { 
                printf("%c", toupper(n[i]));
            } else {
                printf("%c", tolower(n[i]));   
            }
       } 
    } else {
        printf("%s", n);
    }
    return 0;
}
