#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    vector<int> vals;
    for(int i=0; i<4; i++) {
        int temp;
        scanf("%d", &temp);
        bool contains = false;
        for(int j = (int)vals.size()-1; j>=0; j--) {
           if(vals[j]==temp) {
                contains = true;
           } 
        }
        if(!contains) {
            vals.push_back(temp);
        }

    }
    int buy = 4-(int)vals.size();
    printf("%d", buy);
    return 0;
}
