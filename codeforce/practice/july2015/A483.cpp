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

unsigned long long gcd(unsigned long long x, unsigned long long y) {
    if(x==1) {
        return 1;
    } else if(x==0 || y==0){
        return max(x, y);
    } else {
        return gcd(y, x%y);
    }
}
bool coprime(unsigned long long x, unsigned long long y)  {
    unsigned long long g = gcd(x, y);
    if(g<=1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    unsigned long long l, r;  
    cin >> l >> r;
    unsigned long long x, y, z;
    bool valid = true;
    int count = 0;
    if(l-r<2) {
        printf("-1");
    } else {
    for(unsigned long long a=l; a<=r-2; a++) {
        for(unsigned long long b=a+1; b<=r-1; b++) {
            for(unsigned long long c=b+1; c<=r; c++) {
                count++;
                if(coprime(a, b) && coprime(b, c) && !coprime(a, c)) {
                    valid = false;
                    x = a; y = b; z = c;
                    break;
                }
            }

        }
    }
    if(count==0 || valid) {
        printf("-1"); 
    } else {
        cout << x << " " << y << " " << z;
    }
    }
    return 0;

}
