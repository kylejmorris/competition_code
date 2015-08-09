#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<ctype.h>

using namespace std;

struct STUDENT {
    int id;
    int has;
    int needs;
};
typedef struct STUDENT Student;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int ma = 0;
    int index = 0;
    vector<Student> curr;
    vector<Student> done;
    for(int i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        Student s;
        s.id = i+1;
        s.needs = temp;
        s.has=0;
        curr.push_back(s);
    }
    while((int)curr.size()>0) {
        Student c = curr[0];
        if(c.has+m>=c.needs) {
            done.push_back(c);
        } else {
            c.has+=m;
            curr.push_back(c);
        }
        curr.erase(curr.begin()+0);
    }
    printf("%d", done[n-1].id);
    return 0;
}
