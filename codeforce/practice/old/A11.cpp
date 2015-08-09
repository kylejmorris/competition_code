#include<stdio.h>

int main()  {
    int n, d;
    
    scanf("%d%d", &n,&d);
    int b[n]; 
    for(int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }
    int count = 0;
    for(int c=1; c<n; c++) {
        if(b[c]<=b[c-1]) {
            int difference = b[c-1]-b[c]; 
            int add = difference/d+1;
            count+=add;
            b[c]+=(add*d);
        }
    }
    printf("%d", count);
    return 0;
}
