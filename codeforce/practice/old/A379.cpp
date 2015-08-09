#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int burnt =0 ;
    int candles = a;
    int count = 0;
    while(candles>0) {
        count+=candles;
        burnt+=candles;
        candles = (burnt/b);
        burnt = burnt%b;
    }
    printf("%d", count);
    return 0;
}
