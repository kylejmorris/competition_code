#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int levels = 0;
    int i = 1;
    int sum = (i)*(i+1)/2; 
    while(sum<=n) {
        n-=sum;
        i++; levels++;
        sum = i*(i+1)/2;
    }
    printf("%d", levels);
    return 0;
}

