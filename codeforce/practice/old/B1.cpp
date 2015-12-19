#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>
#include<iostream>
#include<sstream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while(n>0) {
    string line;
    cin >> line;
    string result = "";
    int row;
    int col = 0;

    if(line[0]=='R' && !(line[1]>='A' && line[1]<='Z')) { //second char isn't a letter
        stringstream rs;
        int pos = line.find("R"); 
        int pos2 = line.find("C");
        row = atoi(line.substr(pos+1, pos2).c_str());
        col = atoi(line.substr(pos2+1, (int)line.size()).c_str());
        while(col>0) {
            char l;
            if(col!=26) {
             l = ('A'+col%26-1);
            } else {
               l = 'Z'; 
            } 
            result+=l;
            col/=27;
        }
        reverse(result.begin(), result.end());
        rs<<result;
        rs<<row;
        cout << rs.str() << "\n";
    } else {
        stringstream res;
        string r = "";
        string c = "";
        int spos = 0;
        for(int i=0; i<(int)line.size(); i++) {
            if(line[i]>='A' && line[i]<='Z') {
                r+=line[i];
            } else {
                spos = i;
                break;
            }
        }
        c = line.substr(spos, (int)line.size());
        res << "R";
        for(int i=0; i<(int)r.size(); i++) {
            col+=((r[(int)r.size()-1-i]-'A'+1) *pow(26, i));
        }
        res << c;
        res << "C";
        res << col;
        cout << res.str() << "\n";
    }
    printf("ROW %d COLUMN %d\n", row, col);
    n--;
    } return 0;

}
