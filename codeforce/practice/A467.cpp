#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i=0; i<n; i++) {
       int p, q;
       scanf("%d %d", &p, &q); 
       if(p+1<q) { count++; }
    }
    printf("%d", count);
    return 0;
}
