#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class EscapeFromRectangle {
    public:
        int shortest(int x, int y, int w, int h) {
            int m = min(x, y);
            m = min(m, w-x);
            m = min(m, h-y);
            return m;
        }
};
