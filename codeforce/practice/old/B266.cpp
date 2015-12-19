#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void shift(char kids[], int len) {
        for(int i=0; i<len-1; i++) {
            if(kids[i]=='B'&&kids[i+1]=='G') {
                char temp = kids[i];
                kids[i] = kids[i+1];
                kids[i+1] = temp;
                i++;
            }             
        }  
}

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    char kids[n+1];
    scanf("%s", kids);
    while(t>0) {
        shift(kids, n);
        t--;
    }
    printf("%s", kids);
    return 0;
}
