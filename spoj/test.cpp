#include<iostream>

using namespace std;

int main() {
    int i;
    bool found = false;
    while(!found) {
        cin>>i;
        if(i==42) {
            found = true;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
