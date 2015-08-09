#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int busses = 1;
    int count = 0;
    for(int bus=0; bus<n; bus++) {
        int current;
        scanf("%d", &current);
        if(count+current>m) {
            busses++;
            count = current;
        } else {
            count+=current;
        }
    }
    printf("%d", busses);
    return 0;
}
