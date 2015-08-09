#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main() {
    string name;
    string line;
    string line2;
    cin >> name;
    cin >> line;
    cin >> line2;
    name+=line;
    for(int i=0; i<(int)name.size(); i++) {
        int index = line2.find(name[i]);
        if(index!=-1) {
            line2.erase(line2.begin() + index);
        } else {
            printf("NO");
            return 0;
        }
    }
    if(line2.size()==0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
