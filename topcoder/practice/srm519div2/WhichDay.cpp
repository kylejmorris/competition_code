#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class WhichDay {
    public:
        string getDay(vector<string> notOnThisDay) {
            vector<string> days;
            days.push_back("Monday");
            days.push_back("Tuesday");
            days.push_back("Wednesday");
            days.push_back("Thursday");
            days.push_back("Friday");
            days.push_back("Saturday");
            days.push_back("Sunday");
            for(int i=0; i<6; i++) {
                for(int j=0; j<(int)days.size(); j++) {
                    if(days[j]==notOnThisDay[i]) {
                        days.erase(days.begin()+j);
                    }
                }
            }
            return days[0];
        }

};
