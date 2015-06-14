#include<utility>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;
int ids[101] = {0};
vector<int> vals;

/*bool comp(const int a, const int b) {
    return (vals[a]<vals[b]);
}*/

/*int main() {
    int n,k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        vals.push_back(t);
        ids[i] = i+1;
    }
    sort(ids, ids+n, comp);
    for(int i=0; i<n; i++) {
        printf("%d id \n",ids[i]);
    }
}*/

pair<int, int> data[400];


/*int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++) {
       int val;
       scanf("%d", &val); 
       data[i].first = val;
       data[i].second = i+1;
    }
    sort(data, data+n);
    for(int i=0; i<n; i++) {
        printf("index %d with value %d\n", data[i].second, data[i].first);
    }
}*/

//IMPLEMENTATION 3
//

struct mypair {
    int a, b;
};
typedef struct mypair MuhPair;
MuhPair pairs[404];

bool comp(MuhPair a, MuhPair b) {
    return (a.a < b.a);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++) {
       int a;  
       scanf("%d", &a);
       pairs[i].a = a;
       pairs[i].b = i+1;
    }
    sort(pairs, pairs+n, comp);
    for(int i=0; i<n; i++) {
        printf("index %d with val %d\n", pairs[i].b, pairs[i].a);
    }
}
