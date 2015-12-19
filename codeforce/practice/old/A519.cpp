#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main() {
    FILE *f = fopen("input.txt", "r");
    int white =0;
    int black = 0;
    for(int i=0; i<8; i++) {
        char line[9];
        fscanf(f, "%s", line);
        for(int c=0; c<8; c++) {
            char t = line[c];
            switch(t) {
                case 'Q': white+=9; break;
                case 'q': black+=9; break;
                case 'R': white+=5; break;
                case 'r': black+=5; break;
                case 'B': white+=3; break;
                case 'b': black+=3; break;
                case 'N': white+=3; break;
                case 'n': black+=3; break;
                case 'P': white+=1; break;
                case 'p': black+=1; break;
            }
        }
    }
    if(white>black) {
        printf("White");
    } else if(black>white){
        printf("Black");
    } else {
        printf("Draw");
    }
    return 0;
}
