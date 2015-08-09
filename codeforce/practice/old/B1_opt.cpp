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

void g(int t){
	if(t){
		g((t-1)/26);
		putchar(65+(t-1)%26);
	}
}

void test(int t) {
    if(t>0) {
        putchar(65+(t-1)%26);
        test((t-1)/26);
    }
}
int main() {

    int n;
    for(int i=0; i<1000; i++) {
        printf("%d is ", i);
        test(i);
        if(i%5==0) {
            printf("\n");
        }
    }
    scanf("%d", &n); 
    while(n>0) {
        string line;
        cin >> line;
        int rows = 0;
        int cols = 0;
        if(sscanf(line.c_str(), "%*c%d%*c%d", &rows, &cols)==2) {
            g(cols); cout <<rows<<"\n";
        } else {
            int posd = 0;
            for(int i=0; i<(int)line.size(); i++) {
                if(line[i]>='0' && line[i]<='9') {
                    posd = i; 
                    break;
                }
            }
            string colstr = line.substr(0, posd);
            string rowstr = line.substr(posd, line.size());
            
            for(int i=0; i<(int)colstr.size(); i++) {
                int add = (colstr[i]-'A'+1); 
                int pow = 1;
                for(int j=0; j<(int)(colstr.size()-1-i); j++) {
                    pow*=26;
                }
                cols+=(add*pow);
            }
            cout << "R" << rowstr << "C" << cols << "\n";
        }

        n--;
    }
}
