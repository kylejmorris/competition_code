#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, s;
    scanf("%d %d", &s, &n);
    pair<int, int> dragons[1000];
    for(int i=0; i<n; i++) {
        int x,y;
        scanf("%d %d", &x, &y);
        dragons[i].first = x;
        dragons[i].second = y;
    } 
    sort(dragons, dragons+n);
    int index = 0;
    while(index<n && dragons[index].first<s) {
        s+=dragons[index].second;
        index++;
    }
    if(index==n) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
