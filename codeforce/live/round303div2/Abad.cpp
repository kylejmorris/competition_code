#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int hits[n][n];
    vector<int> cars;
    for(int r=0; r<n; r++) {
        cars.push_back(r);
        for(int c=0; c<n; c++) {
            scanf("%d", &hits[r][c]);
        }
    }
    for(int r=0; r<n; r++) {
        for(int c=0; c<n; c++) {
            if(hits[r][c]==3 || hits[r][c]==1) {
                cars[r]=-5;
            }
        }
    }        
    int count = 0;
    for(int i=0; i<(int)cars.size(); i++) {
        if(cars[i]!=-5) {
            count++;
        }
    }
    if(count>0) {
        printf("%d\n", count);
    } else {
        printf("%d", count);
    }
    for(int i=0; i<n; i++) {
        if(cars[i]!=-5) {
            printf("%d ", (i+1));
        }
    }
    return 0;
}
