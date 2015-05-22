#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char data[101];
    scanf("%s", data);
    int length = (int)(strlen(data)); 
    printf("%c", tolower('H'));
    for(int i=0; i<length; i++) {
        if(data[i]>='A' && data[i]<='Z') {
            if(data[i]!= 'A' && data[i]!='E' && data[i]!='I' && data[i]!='O' && data[i]!='U' && data[i]!='Y') {
                data[i]+=32;
                printf(".%c",data[i]);
            }
        } else{
            if(data[i]!='a' && data[i]!='e' && data[i]!='i' && data[i]!='o' && data[i]!='u' && data[i]!='y') {
                printf(".%c", data[i]);
            }
        }
    }
}
