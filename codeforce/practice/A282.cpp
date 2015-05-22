#include<stdio.h>
#include<vector>
#include<string.h>
#include<string>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    while(n>0) {
        char d[4]; 
        scanf("%s", d);
        if(d[0]=='+' || d[1]=='+') {
            count++;
        } else {
            count--;
        }
        n--; 
    }
    printf("%d", count);
    return 0;
}
