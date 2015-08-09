#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    char vals[20];
    scanf("%s", vals);
    for(int i=0; i<(int)strlen(vals); i++) {
        if(i>0 || vals[i]!='9') {
            char inverted = '9'-vals[i]+'0';
            if(inverted<vals[i]) {
                vals[i] = inverted;
            }
        }
    }
    printf("%s", vals);
    return 0;
}
