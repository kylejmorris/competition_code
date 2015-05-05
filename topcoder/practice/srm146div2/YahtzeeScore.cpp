#include<iostream>
#include<vector>
#include<string>
using namespace std;

class YahtzeeScore {
    public:
        int maxPoints(vector<int> toss) {
            int max = 0; //max value found
            for(int i=1; i<=6; i++) {
                int tempMax = 0; //max for this occurence
                for(vector<int>::size_type count=0; count<toss.size(); count++) {
                    if(toss[count]==i) {
                        tempMax+=i;
                    }
                }
                if(tempMax>max) {
                    max = tempMax;
                }
            }
            return max; 
        }
} a;
int main() {
    vector<int> rolls(5);
    for(vector<int>::size_type i = 0; i<rolls.size(); i++) {
        cin >> rolls[i];
    }   
    cout << a.maxPoints(rolls);
    return 0;
}
