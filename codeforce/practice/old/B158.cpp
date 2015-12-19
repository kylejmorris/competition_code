#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
    int n;
    int fours = 0;
    int threes = 0;
    int twos = 0;
    int ones = 0;
    int taxiCount = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int temp; 
        scanf("%d", &temp);
        if(temp==4) { fours++; }
        if(temp==3) { threes++; }
        if(temp==2) { twos++; }
        if(temp==1) { ones++; }
    }
    taxiCount+=fours;
    taxiCount+=threes;
    if(ones>threes) {
        ones-=threes;
    } else {
        ones = 0;
    }
    if(twos%2!=0) {
        ones-=2;
    }
    taxiCount+=((twos+1)/2);
    taxiCount+=((ones+3)/4);
    printf("%d", taxiCount);
    return 0;
}   
