#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<ctype.h>

using namespace std;

void displayVec(vector<int> t) {
    for(int i=0; i<(int)t.size(); i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}
void getComb(int k, vector<int> given, vector<vector<int> > *gen) {
    if(k==0) {
        gen->push_back(given);
    } else {
        printf("Given size: %d", (int)given.size());
        for(int i=0; i<(int)given.size(); i++) {
            vector<int> tempgiven; 
            vector<vector<int> > tempgen;
            for(int t=0; t<(int)given.size(); t++) {
                if(t!=i) {
                    tempgiven.push_back(given[t]);
                }
            }
            getComb(k-1, tempgiven, &tempgen);
            for(int k=0; k<(int)tempgen.size();k++) {
                reverse(tempgen[k].begin(), tempgen[k].end());
                tempgen[k].push_back(given[i]);
                reverse(tempgen[k].begin(), tempgen[k].end());
                gen->push_back(tempgen[k]);
                printf("success pushed back: ");
                for(int l=0; l<(int)tempgen[k].size(); l++) {
                    printf("%d", tempgen[k][l]);
                }
                printf("\n");
            }
        }
    }
}

int main() {
    int n, l, r, x;
    scanf("%d %d %d %d", &n, &l, &r, &x);
    vector<int> data;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        data.push_back(temp);
    }
    vector<vector<int> > combs;
    getComb(1, data, &combs);

    for(int i=0; i<(int)combs.size(); i++) {
        for(int j=0; j<(int)combs[i].size(); j++) {
            printf("%d", combs[i][j]);
        } 
        printf("\n");
    }
    return 0;
}


