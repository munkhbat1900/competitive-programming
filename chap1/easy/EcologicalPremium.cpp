#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int f;
        scanf("%d", &f);
        int total = 0;
        for (int i = 0; i < f; i++) {
            int sz, cnt, friendliness;

            scanf("%d %d %d", &sz, &cnt, &friendliness);
            total += sz * friendliness;
        }

        printf ("%d\n", total);
    }
    return 0;
}
