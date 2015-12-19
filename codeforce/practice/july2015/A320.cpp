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
    string num;
    cin >> num;
    bool valid = true;
    int fours = 0;
    if(num[0]-'0'==4) {
        printf("NO"); 
        return 0; 
    }
    for(int i=0; i<(int)num.length(); i++) {
        if(num[i]-'0'==4) {
            fours++;
            if(fours>2) {
                valid = false;
                break;
            }
        } else if(num[i]-'0'!=1 && num[i]-'0'!=4) {
            valid = false;
            break;
        } else {
            fours = 0;
        }
    }
    if(valid) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
