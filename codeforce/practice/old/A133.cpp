#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<string>
#include<vector>

using namespace std;

int main() {
    char line[101];
    scanf("%s", line);
    int size = strlen(line);
    for(int i=0; i<size; i++) {
        if(line[i]=='H' || line[i]=='Q' || line[i]=='9') {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
