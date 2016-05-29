#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

/// 12250 - Language Detection
int main() {
	string s;
	int counter = 0;
	cin.tie(0);
    ios::sync_with_stdio(false);
	while (true) {
        getline(cin, s);
        if (!s.compare("#")) {
            break;
        }
        counter++;
        if (!s.compare("HELLO")) {
            printf("Case %d: ENGLISH\n",counter);
        } else if (!s.compare("HOLA")) {
            printf("Case %d: SPANISH\n",counter);
        } else if (!s.compare("HALLO")) {
            printf("Case %d: GERMAN\n",counter);
        } else if (!s.compare("BONJOUR")) {
            printf("Case %d: FRENCH\n",counter);
        } else if (!s.compare("CIAO")) {
            printf("Case %d: ITALIAN\n",counter);
        } else if (!s.compare("ZDRAVSTVUJTE")) {
            printf("Case %d: RUSSIAN\n",counter);
        } else {
            printf("Case %d: UNKNOWN\n",counter);
        }
	}
	return 0;
}
