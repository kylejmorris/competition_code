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
    scanf("%d", &n);    
    int h[n+1];
    h[0] = 0;
    for(int i=1; i<=n; i++) {
        scanf("%d", &h[i]);
    }
    int energy = 0;
    int cost = 0;
    for(int i=0; i<n; i++) {
        energy+=(h[i]-h[i+1]);         
        if(energy<0) {
            cost+=abs(energy);
            energy = 0;
        }
    }
    printf("%d", cost);
}
