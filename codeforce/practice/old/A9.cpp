#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int a, int b) 
{
   if(max(a, b)%min(a,b)==0) {
        return a;
   } else {
        return gcd(max(a,b)%min(a,b), min(a,b));
   }
} 

int main() 
{
    int y;
    int w;
    cin >> y >> w;
    int num = 6-max(w, y)+1;
    int denom = 6;
    int g = gcd(num, denom);
    num/=g;
    denom/=g;
    cout << num << "/" << denom;
}
