#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

long long getCount(long long a, long long b) {
    if(a%b==0) {
        return a/b;
    } else {
        long long count = (a-b)/b + 1;
        return count + getCount(b, a-(b*count));
    }
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << getCount(a, b);
    return 0;
}
