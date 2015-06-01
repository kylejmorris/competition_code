#include<stdio.h>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<char> dis;
    char name[101];
    scanf("%s", name);
    int len = strlen(name);
    for(int i=0; i<len; i++) {
        char c = name[i];
        bool contains = false;
        for(int j=0; j<(int)dis.size(); j++) {
            if(dis[j]==c) {
                contains = true;
            }
        } 
        if(!contains) {
           dis.push_back(c); 
        }
    }
    if((int)dis.size()%2==0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
    return 0;
}
