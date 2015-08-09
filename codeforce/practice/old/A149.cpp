#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int k;
    scanf("%d", &k);
    vector<int> vals;
    for(int i=0; i<12; i++) {
        int temp;
        scanf("%d", &temp);
        vals.push_back(temp);
    }
    sort(vals.begin(), vals.end());
    reverse(vals.begin(), vals.end());
    int index = 0;
    int sum = 0;
    while(sum<k && index<12) {
        sum+=vals[index];
        index++;
    }
    if(sum<k) {
        printf("-1");
    } else {
        printf("%d", index);
    }
}

