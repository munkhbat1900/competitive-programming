/// UVA 11332 - Summing Digits

#include <iostream>
#include <cstdio>

using namespace std;

int rec(int n) {
    if (n < 10) {
        return n;
    }

    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return rec(sum);
}

int main() {
    int n;
    while(scanf("%d", &n), n != 0) {
        printf ("%d\n", rec(n));
    }
}
