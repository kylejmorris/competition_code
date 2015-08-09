#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

int main() {
    int n, a, b;
    int most = 0;
    int people = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        people-=a; people+=b;
        if(people>most) {
            most = people;
        }
    }
    printf("%d", most);

    return 0;
}

