#include<bits/stdc++.h>
#include<ctime>
using namespace std;
typedef long long LL;
typedef double D;
typedef float F;
typedef string S;
typedef int I;
typedef bool B;
int main() {
    const long double systime = time(0);
    cin.tie();
    std::ios::sync_with_stdio(false);
    int arr1[10000], arr2[10000];

    int x,c=0;
    cin >> x;
    for(int i=0; i<x; i++) {
        cin >> arr1[i];
    }
    for(int i=0; i<x; i++) {
        for(int j=i+1; j<x; j++) {
            if(arr1[i]==arr1[j]) {
                arr1[j]+=1;
                c++;
            }
        }
    }
    cout << c << endl;
    long double time2 = time(0);
    cout << (time2-systime) << endl;
    return 0;
}
