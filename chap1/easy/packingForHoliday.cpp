#include <cstdio>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    int counter = 0;
    while(t--) {
        counter++;
        int l, w, h;
        scanf("%d %d %d", &l, &w, &h);

        if (l <= 20 && w <= 20 && h <= 20) {
            printf ("Case %d: good\n", counter);
        } else {
            printf ("Case %d: bad\n", counter);
        }
    }
}
