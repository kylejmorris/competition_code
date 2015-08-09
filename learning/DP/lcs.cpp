#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<string>

using namespace std;
//this is it kyle, you're first DP solution implented on your own. Pat yourself on your back <3
int main() {
    string a = "ABCBDAB";
    string b = "BDCABA"; 
    int m = (int)a.size();
    int n = (int)b.size();
    int dp[n][m];
    /*for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(b[i]==a[j]) {
                if(i==0 || j==0) {
                    dp[i][j]=1;
                } else {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
            } else{
                if(i==0 && j==0) {
                    dp[i][j] = 0;
                } else if(i==0 && j>0) {
                    dp[i][j] = dp[i][j-1];
                } else if(i>0 && j==0) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }*/

    //better implementation...
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i==0 || j==0) {
                dp[i][j] = 0;
            } else if(x[i {
                
            }
        }
    } 
    
}
