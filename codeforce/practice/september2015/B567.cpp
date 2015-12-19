#include<stdio.h>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<vector>
#include<iostream>

using namespace std;

int main() {
    int n;
    vector<int> guests;
    int current = 0;
    int maxguests = 0;
    scanf("%d", &n);
    while(n>0) {
        char state;
        int id;
        scanf(" %c %d", &state, &id);

        if(state=='+') {
            current++; 
            guests.push_back(id);
        } else {
            bool contained = false;
            for(int i=0; i<(int)guests.size(); i++) {
                if(guests[i]==id) {
                    guests.erase(guests.begin() + i);
                    contained = true;
                    break;
                } 
            }
            if(contained) {
                current--;
            } else {
                maxguests++;  
            }
        }
        maxguests = max(current, maxguests);
        n--;
    }
    printf("%d", maxguests);
}
