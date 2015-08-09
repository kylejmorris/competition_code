#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> people;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        people.push_back(temp);
    }
    sort(people.begin(), people.end());
    reverse(people.begin(), people.end());
    int pos = 0;
    int count = 0;
    while(pos<n) {
        count+=(2*(people[pos]-1)); 
        pos+=k;
    }
    printf("%d", count);
    return 0;
}
