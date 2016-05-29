///UVA 10963 - The Swallowing Ground

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int w;
        scanf("%d", &w);
        int last = -1;
        bool b = false;
        while(w--) {
            int y1, y2;
            scanf("%d %d", &y1, &y2);
            if (last != -1 && last != abs(y1 - y2)) {
                b = true;
            }
            last = abs(y1 - y2);
        }
        if (!b) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
        if (t) {
            printf("\n");
        }
    }

    return 0;
}
