#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
#include<math.h>
#include<ctype.h>

using namespace std;

bool canMake(int t[], int heatMap[]) {
    for(int i=0; i<26; i++) {
        if(t[i]>heatMap[i]) {
            return false;
        }
    }
    return true;
}

void make(int t[], int heatMap[]) {
    for(int i=0; i<26; i++) {
        heatMap[i]-=t[i];
    } 
}

void remove(int t[], int heatMap[]) {
    for(int i=0; i<26; i++) {
        heatMap[i]+=t[i];
    }
}

void printHeatMap(int vals[]) {
    for(int i=0; i<26; i++) {
        printf("MAP HAS %d %c's\n", vals[i], 'a'+i);
    }
}

int main() {
    string a, b,c;
        
    cin >> a >> b >> c;
    int aHeatMap[26] = {0};
    int bHeatMap[26] = {0};
    int cHeatMap[26] = {0};
    int finalMap[26] = {0};
    for(int i=0; i<(int)a.size(); i++) {
        aHeatMap[a[i]-'a']++;
        finalMap[a[i]-'a']++;
    }
    for(int i=0; i<(int)b.size(); i++) {
        bHeatMap[(b[i]-'a')]++;
    }
    for(int i=0; i<(int)c.size(); i++) {
        cHeatMap[c[i]-'a']++;
    }
    /*for(int i=0; i<26; i++) {
        printf("a has %d %c's, b has %d %c and c has %d %cs\n", aHeatMap[i], 'a'+i, bHeatMap[i], 'a'+i, cHeatMap[i], 'a'+i);
    }*/
    int bcount = 0;
    int ccount = 0;
    int bmax = 0;
    int cmax = 0;
    int k = 0;
        while(canMake(bHeatMap, aHeatMap)) {
            make(bHeatMap, aHeatMap); 
            bcount++;
        }

    while(canMake(cHeatMap, aHeatMap)) {
        make(cHeatMap, aHeatMap);
        ccount++;
    }
    k = bcount+ccount;
    bmax = bcount; cmax = ccount;
    int valid = 1;
    while(bcount>0 && valid) {
       remove(bHeatMap, aHeatMap); //put it back there
       bcount--;
       while(canMake(cHeatMap, aHeatMap)) {
            make(cHeatMap, aHeatMap);
            ccount++;
       }
       if(bcount+ccount > k) {
            k = bcount+ccount;
            bmax = bcount;
            cmax = ccount;
       }
    }
    for(int i=0; i<bmax; i++) {
        make(bHeatMap, finalMap);
        cout << b;
    }
    for(int i=0; i<cmax; i++) {
        make(cHeatMap, finalMap);
        cout << c;
    }
    for(int i=0; i<26; i++) {
        for(int j=0; j<finalMap[i]; j++) {
            printf("%c", 'a'+i);
        }
    }
    return 0;
}
