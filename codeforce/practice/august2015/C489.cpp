#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main() {
    int m, s, nines, zeros, left;
    string result = "";
    scanf("%d %d", &m, &s);
    nines = 0; zeros = 0;
    if(m<(s+8)/9) {
        printf("-1 -1");
    } else {
        left = s%9;
        nines = s/9;
        zeros = (m-nines);
        if(left>0) { zeros--;}
        if(zeros==0) {
            if(left!=0) {
                result+=(left+'0');
            }
           for(int i=0; i<nines; i++) {
               result+='9';
           }
           printf("%s ", result.c_str());
           reverse(result.begin(), result.end());
           printf("%s", result.c_str());
        } else if(m>1 && (nines==0 && left==0)) {
            printf("-1 -1");
        } else {
            if(left>0) { printf("%d", left);} else { if(m>1) {printf("9"); nines--;}}
            for(int i=0; i<zeros; i++) {
                printf("0");
            } 
            for(int i=0; i<nines; i++) {
                printf("9");
            }

            printf(" ");
            for(int i=0; i<nines; i++) {
                printf("9");
            }  
            if(left>0) { printf("%d", left);} 
            for(int i=0; i<zeros; i++) {
                printf("0");
            }
        }
    }
    return 0;
}
