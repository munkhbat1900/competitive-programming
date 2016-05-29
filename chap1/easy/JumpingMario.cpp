/// UVA 11764 - Jumping Mario

#include <cstdio>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int counter = 0;
    while(t--) {
        counter++;
        int n;
        scanf("%d", &n);
        int countHigh = 0, countLow = 0;
        int last;
        scanf("%d", &last);
        for (int i = 1; i < n; i++) {
            int current;
            scanf("%d", &current);
            if (last > current) {
                countLow++;
            } else if (last < current){
                countHigh++;
            }
            last = current;
        }
        printf("Case %d: %d %d\n", counter, countHigh, countLow);
    }
}
