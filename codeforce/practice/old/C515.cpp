#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<iostream>
#include<ctype.h>

using namespace std;

int main() {
    int n = 0;
    string a;
    scanf("%d", &n);
    cin >> a;
    string vals[10] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
    string result = "";
    for(int i=0; i<n; i++) {
        result+=vals[a[i]-'0']; 
    } 
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    cout << result;
}
