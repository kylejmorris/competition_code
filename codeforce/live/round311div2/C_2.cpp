#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<utilities.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> found; //which lengths we have for table
    vector<pair<int, int> > vals;
    for(int i=0; i<n; i++) {
        int l;
        bool found = false;
        for(int j=0; j<(int)(vals.size()); j++) {
            if(found[j]==l) {
                found = true;
                break;
            } 
        }
        scanf("%d", &l);
        vals[l].second = l;
    }
}
