#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main() {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);
    int m = a+b+c;
    m = max(m, (a+b)*c);
    m = max(m, (a*b)+c);
    m = max(m, a+(b*c));
    m = max(m, a*(b+c));
    m = max(m, a*b*c); 
    printf("%d", m);
    return 0;
}
