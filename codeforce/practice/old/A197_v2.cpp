#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    char test[101];
    scanf("%s", test);
    int len = strlen(test);
    sort(test, test+len);
    for(int i=0; i<len-1; i++) {
        if(test[i]!='+') {
            printf("%c+", test[i]);
        }
    }
    printf("%c", test[len-1]);
}
