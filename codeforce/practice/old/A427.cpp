#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    int n;    
    scanf("%d", &n);
    int sum =0;
    int count = 0;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        if(sum-1<0 && temp==-1) {
            count++;
        } else {
            sum+=temp;
        }
    }
    printf("%d", count);
}

