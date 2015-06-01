#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    char p[101];
    char q[101];
    char result[101];
    scanf("%s %s", p, q);
    int len = strlen(p);
    for(int i=0; i<len; i++) {
        if(p[i]!=q[i]) {
            result[i] = '1';
        } else {
            result[i] = '0';
        }
        result[i+1] = '\0';
    }
    printf("%s", result);
    return 0;
}
