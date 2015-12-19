#include<stdio.h>

using namespace std;

int main() {
    int n, p1, p2, p3, t1, t2;
    int power = 0;
    int previous = 0;
    int l, r;
    scanf("%d %d %d %d %d %d", &n, &p1, &p2, &p3, &t1, &t2);
    scanf("%d %d", &l, &r);
    power+=(r-l)*p1; 
    previous = r;
    for(int i=0; i<n-1; i++) {
        scanf("%d %d", &l, &r);
        int interval = l-previous;
        if(interval>t1) {
            power+=(p1*t1); 
            interval-=t1;
            if(interval>t2) {
                power+=(t2*p2);
                interval-=t2;
                power+=(p3*interval);
            } else {
                power+=(p2*interval);
            }
        } else {
            power+=(p1*interval);
        }
        previous = r;
        power+=(r-l)*p1;
    }
    printf("%d", power);
} 
