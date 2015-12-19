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
    int min1, max1, min2, max2, min3, max3;
    scanf("%d", &n);
    scanf("%d %d", &min1, &max1);
    scanf("%d %d", &min2, &max2);
    scanf("%d %d", &min3, &max3);

    int a = min1;
    int b = min2;
    int c = min3;
    n-=(min1+min2+min3);
    int temp = min(n, max1-a);
    a+=temp;
    n-=temp;
    temp = min(n, max2-b);
    b+=temp;
    n-=temp;
    temp = min(n, max3-c);
    c+=temp;
    n-=temp;
    printf("%d %d %d", a, b, c);
    return 0;  
}
