#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int findWub(char *song) {
    
}

int main() {
    string song;
    cin >> song;
    int tok = song.find("WUB");
    while(tok!=-1) {
        string word = song.substr(0, tok);
        if(word.size()!=0) {
            printf("%s ", word.c_str());
        }
        song.erase(0, tok+3);
        tok = song.find("WUB");
    }
    printf("%s", song.c_str());
    return 0;
}
