#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int sum = n;
    for(int i=n-1; i>=1; i--) {
        sum+=(i*(n-i));
    }
    printf("%d", sum);
    return 0;
}
