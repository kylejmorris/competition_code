#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main() {
    int n;
    string data;
    scanf("%d", &n);
    cin >> data;
    int index = 1;
    int count = 0;
    while(index<(int)data.size()) {
       if(data[index]==data[index-1]) {
            data.erase(data.begin()+index);
            count++;
       }  else {
            index++;
       }
    }
    printf("%d", count);
    return 0;
}

