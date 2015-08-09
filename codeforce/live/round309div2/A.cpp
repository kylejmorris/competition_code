#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

int main() {
    char line[21];
    scanf("%s", line);
    int count = (int)strlen(line);
    printf("%d", 26*(count+1)-count);
}
