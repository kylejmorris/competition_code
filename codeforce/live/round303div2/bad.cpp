#include<stdio.h>
#include<vector>
using namespace std;

int main() {
    vector<int> cars;
    cars.push_back(5);
    for(int i=0; i<(int)cars.size(); i++) {
        printf("%d", cars[i]);
    }
    return 0;
}
