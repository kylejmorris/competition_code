#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int maxml = (k*l)/nl;
    int limes = (c*d);
    int salt = p/np;
    int toasts = min(min(maxml, limes), salt)/n;
    printf("%d", toasts);
    return 0;
}
