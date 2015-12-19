#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<string> data;
    for(int i=0; i<n; i++) {
        string temp;
        cin >> temp;
        data.push_back(temp);
    }
    int maxCount = 0;
    for(int i=0; i<n; i++) {
        int same = 1;
        for(int j=0; j<n; j++) {
            if(i!=j && data[i]==data[j]) {
                same++;
            }
        }
        maxCount = max(same, maxCount);
    }
    printf("%d", max(1, maxCount));
}
