#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
/// UVA 12289 - One-Two-Three
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    scanf("%d", &t);
    while(t--) {
        string s;
        getline(cin, s);
        int c1 = 0;
        if (s.length() == 5) {
            printf("3\n");
            continue;
        }

        if (s[0] == 'o') {
            c1++;
        }

        if (s[1] == 'n') {
            c1++;
        }

        if (s[2] == 'e') {
            c1++;
        }

        if (c1 >= 2) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}
