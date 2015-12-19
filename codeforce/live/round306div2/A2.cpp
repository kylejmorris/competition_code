#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;
int main() {
    char s[100001];    
    scanf("%s", s);
    vector<int> abPos;
    vector<int> baPos;
    int len = strlen(s);
    for(int i=0; i<len-1; i++) {
        if(s[i]=='B'&&s[i+1]=='A') {
            baPos.push_back(i);
        }
        if(s[i]=='A'&&s[i+1]=='B') {
            abPos.push_back(i);
        }
    }
    for(int i=0; i<(int)abPos.size(); i++) {
        for(int q=0; q<(int)baPos.size(); q++) {
            if(abs(abPos[i]-baPos[q])>1) {
                printf("YES");
                return 0;
            }

        }
    }
    printf("NO");

    return 0;
}
