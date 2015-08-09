#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n1, n2, k1, k2;
    scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
    if(n1<=n2) {
        printf("Second");
    } else {
        printf("First");
    }
    return 0;
}
