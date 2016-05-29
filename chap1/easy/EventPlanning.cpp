#include <cstdio>

#define rep(i,n) for (int i=0;i<(n);i++)

using namespace std;

int main() {
    int n, b, h, w;
    while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4) {
        int min = 1000000000;
        while(h--) {
            int p;
            scanf("%d", &p);
            int w1 = w;
            while (w1--) {
                int a;
                scanf("%d", &a);
                int tmp = n * p;
                if (a >= n && min > tmp && tmp <= b) {
                    min = n * p;
                }
            }
        }

        if (min == 1000000000) {
            printf("stay home\n");
        } else {
            printf("%d\n", min);
        }
    }

    return 0;
}
