#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);    
    printf("%d", min(n-a, b+1));
    return 0;
}
