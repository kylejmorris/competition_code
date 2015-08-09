#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    string oneVals[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}; 
    string tenVals[10] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int num;
    scanf("%d", &num);
    if(num>=0 && num<=19) {
        printf("%s", oneVals[num].c_str());
    } else {
        int ones = num%10;
        int tens = num/10;
        printf("%s", tenVals[tens-2].c_str());
        if(ones>0) {
            printf("-%s",oneVals[ones].c_str());
        }
    }
}
