#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n; 
    scanf("%d", &n);
    char line[n+1];
    scanf("%s", line);
    int pos = -1;
    for(int i=0; i<n; i++) {
        if(line[i]=='0') {
            pos = i;
            break;
        }
    }
    if(pos==-1) {
        printf("%d", n);
    } else {
        printf("%d", pos+1);
    }
}
