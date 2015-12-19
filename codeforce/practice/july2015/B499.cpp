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

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    string a[m];
    string b[m];
    for(int i=0; i<m; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    for(int i=0; i<n; i++) {
        string word;
        cin >> word;
        for(int j=0; j<m; j++) {
            if(a[j]==word || b[j]==word) {
                if(a[j].size()<=b[j].size()) {
                    cout << a[j] << " ";
                } else {
                    cout << b[j] << " ";
                }
            }
        }
    }
    return 0;
}
