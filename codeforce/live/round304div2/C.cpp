#include<stdio.h>
#include<vector>
#include<stdlib.h>

using namespace std;

int main() {
    int n, k1, k2;
    vector<int> a;
    vector<int> b;
    scanf("%d %d", &n, &k1); 
    for(int i=0; i<k1; i++) {
          int temp;
          scanf("%d", &temp);
          a.push_back(temp);
    }
    scanf("%d", &k2);
    for(int i=0; i<k2; i++) {
        int temp;
        scanf("%d", &temp);
        b.push_back(temp);
    }
    int p1 = a[0]; //pivot point 1
    int p2 = b[0]; //pivot point 2
    int moves = 0;
    bool failed = false;
    while((a.size()>0 && b.size()>0) && !failed) {
        int ac = a[0];
        int bc = b[0];
        if(moves!=0) {
            if(ac==p1 && bc==p2) {
                failed = true;
            }
        }
        if(ac>bc) {
            a.push_back(bc);
            a.push_back(ac);
            a.erase(a.begin()+0);
            b.erase(b.begin()+0);
        } else {
           b.push_back(ac); 
           b.push_back(bc);
           b.erase(b.begin()+0);
           a.erase(a.begin()+0);
        }
        moves++;
    }
    if(failed) {
        printf("-1");
    } else if(a.size()>b.size()) {
        printf("%d %d", moves, 1);
    } else {
        printf("%d %d", moves, 2);
    }
    return 0;
}
