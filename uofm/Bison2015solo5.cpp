#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {
    int cases;
    scanf("%d", &cases);
    while(cases>0) {
        int bin;
        int sasu;
        cin >> bin;
        cin >> sasu;
        if(bin==1) {
            int sum = 0;
            for(int i=0; i<sasu; i++) {
                int temp;
                cin >> temp;
                sum+=temp;
                printf("%d ", sum);
            }
        } else {
            int sum;
            cin >> sum;
            int temp;
            for(int i=0; i<sasu-1; i++) {
                cin >> temp;
                printf("%d", sum);
                sum+=temp;
            }
        }
        printf("\n");
        cases--;
    }
}
