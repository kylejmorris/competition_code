#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main() {
    char line[101];
    scanf("%s", line);
    int index = 1;
    int upper = 0;
    int lower = 0;
    while(line[index]) {
       if(islower(line[index])) {
            lower++; 
       } 
       index++;
    }
    if(isupper(line[0]) && lower==0) {
        putchar(tolower(line[0]));
        int index = 1;
        while(line[index]) {
            putchar(tolower(line[index]));
            index++;
        }
    } else if(islower(line[0]) && lower==0) {
        putchar(toupper(line[0]));
        int index = 1;
        while(line[index]) {
            putchar(tolower(line[index]));
            index++;
        }
    } else {
        printf("%s", line);
    }
}
