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
        for(int c=0; c<n; c++) {
            scanf("%d", &hits[r][c]);
        }
    }

    for(int r=0; r<n; r++) {
        bool safe = true;
        for(int c=0; c<n; c++) {
            if(hits[r][c]==3 || hits[r][c]==1) {
                safe = false;
            } 
        }
        if(safe) {
            cars.push_back(r);
        }
    }        
    printf("%d\n", (int)cars.size());
    for(int i=0; i<(int)cars.size(); i++) {
        printf("%d ", (cars[i]+1));
    }
    return 0;
}
