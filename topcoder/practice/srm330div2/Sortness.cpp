#include<stdio.h>
#include<string.h>
#include<vector>
#include<string>

using namespace std;

class Sortness {
	public:
    double getSortness(vector<int> a) {
        double count = 0;
        for(int i=0; i<(int)a.size(); i++) {
            for(int c=i-1; c>=0; c--) {
                if(a[c]>a[i]) {
                    count++;
                }
            }
            for(int d=i+1; d<(int)a.size(); d++) {
                if(a[d]<a[i]) {
                    count++;
                }
            }
        }
        return count/a.size();
    }
};
