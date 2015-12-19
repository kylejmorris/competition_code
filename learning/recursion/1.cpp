#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>


using namespace std;

void combs(vector<int> *input) {
    input->push_back(512);
}

int main() {
    vector<int> vals; 
    combs(&vals);
    printf("%d", vals[0]);
}
