/// UVA 11799 - Horror Dash
#include <cstdio>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int counter = 0;
    while(t--) {
        counter++;
        int max = -10000000;
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            int speed;
            scanf("%d", &speed);
            if (max < speed) {
                max = speed;
            }
        }
        printf("Case %d: %d\n", counter, max);
    }


    return 0;
}
