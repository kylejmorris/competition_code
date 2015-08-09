#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<ctype.h>


using namespace std;

int main() {
    int n;
    scanf("%d", &n);    
    int groups = 1;
    int p;
    scanf("%d", &p);
    for(int i=0; i<n-1; i++) {
        int next;
        scanf("%d", &next);
        if(next!=p) {
            groups++;
        }
        p = next;
    }
    printf("%d", groups);
    return 0;
}
