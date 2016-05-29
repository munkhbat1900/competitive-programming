#include<cstdio>

using namespace std;

/// UVA 12279 - Emoogle Balance
int main() {
    int n;
    int test = 0;
    while(scanf("%d", &n), n != 0) {
        test++;
        int arr[n];
        int counter = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] != 0) {
                counter++;
            }
        }
        printf("Case %d: %d\n", test, (counter - (n - counter)));
    }
}
