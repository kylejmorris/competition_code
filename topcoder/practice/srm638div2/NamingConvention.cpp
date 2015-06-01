#include<stdio.h>
#include<string>
#include<vector>
#include<string.h>
#include<ctype.h>

using namespace std;

class NamingConvention {
    public:
        string toCamelCase(string variable) {
            int index = 0;
            string result = "";
            while(index<(int)variable.size()) {
                if(variable[index]!='_') {
                    result+=variable[index];
                } else {
                    char current = variable[index+1];
                    result+=toupper(current);
                    index++;
                }
                index++;
            }
            return result;
        }
};
