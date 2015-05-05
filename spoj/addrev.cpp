#include<iostream>
#include<string>
#include<sstream>

using namespace std;


/*
 * Given target string flip it around
 */
string flipstring(string target) {
    string a = "";
    for(int i=target.size()-1; i>=0; i--) {
        a+=target[i];
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    while(n>0) {
        string a;
        string b; 
        cin >> a >> b;
        a = flipstring(a); //flipping the values
        b = flipstring(b);
        int c;
        int d;
        stringstream(a) >> c;
        stringstream(b) >> d;
        int sum = c+d; //getting sum
        string sumString;
        ostringstream sumstream; //converting sum to string
        sumstream << sum;
        string flipped = flipstring(sumstream.str());
        int result;
        stringstream(flipped) >> result;
        cout << result << "\n";
        n--;
    }
    return 0;
}

