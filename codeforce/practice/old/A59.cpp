#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
   char word[101]; 
   int lower = 0;
   int up = 0;
   scanf("%s", word);
   int len = strlen(word);
   for(int i=0; i<len; i++) {
        if(word[i]>='a' && word[i]<='z') {
            lower++;
        } else {
            up++;
        }
   }
   if(lower>=up) {
        for(int i=0; i<len; i++) {
            printf("%c", tolower(word[i]));
        }
   } else {
        for(int i=0; i<len; i++) {
            printf("%c", toupper(word[i]));
        }
   }
}
