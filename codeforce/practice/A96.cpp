#include<stdio.h>
#include<string.h>
#include<ctype.h>

using namespace std;
int main() {
    char players[101]; 
    scanf("%s", players);
    int index = 0;
    int length = strlen(players);
    int max = 0;
    while(index<length) {
        char cur = players[index];
        int run = 1;
        if(cur=='0') {
            index++;
            while(index<length && players[index]!='1') {
                run++; index++;
            }
            if(run>max) { max = run;}
        } else {
            index++;
            while(index<length && players[index]!='0') {
                run++; index++;
            }
            if(run>max) { max = run; }
        }
    }
    if(max>=7) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
