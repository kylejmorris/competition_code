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
    int n;
    scanf("%d", &n);
    int buy = 0;
    int keys[26] = {0};
    string s;
    cin >> s;

    for(int i=0; i<=(int)s.size()-1; i+=2) {
        char key = tolower(s[i]);
        char door = tolower(s[i+1]);
        if(key!=door) {
            if(keys[door-'a']>0) {
                keys[key-'a']++;
                keys[door-'a']--;
            } else {
                buy++;
                keys[key-'a']++;
            }
        }
    }
    printf("%d", buy);

    return 0;
}
