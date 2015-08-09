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
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c); 
    int data[10010] = {0};
    data[a] = 1;
    data[b] = 1;
    data[c] = 1;
    for(int i=1; i<=n; i++) {
        /*if((i-a)>=0 && data[i-a]!=0) {
            data[i] = max(data[i], data[i-a]+1);
        } 
        if((i-b)>=0 && data[i-b]!=0) {
            data[i] = max(data[i], data[i-b]+1);
        }
        if((i-c)>=0 && data[i-c]!=0) {
            data[i] = max(data[i], data[i-c]+1);
        }*/
        if(i-a>=0 && data[i-a]) { data[i] = max(data[i], data[i-a]+1);}
        if(i-b>=0 && data[i-b]) { data[i] = max(data[i], data[i-b]+1);}
        if(i-c>=0 && data[i-c]) { data[i] = max(data[i], data[i-c]+1);}
    }
    printf("%d", data[n]);
    return 0;
}
