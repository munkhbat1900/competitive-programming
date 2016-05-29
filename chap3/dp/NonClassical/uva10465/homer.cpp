#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <deque>
#include <set>

using namespace std;

#define FOR(k, a, b) for (auto k = (a); k < (b); k++)
#define FORD(k, a, b) for (auto k = (a); k > (b); k--)
#define REP(k, a) for (auto k = 0; k < (a); k++)
#define REDP(k, a) for (auto k = (a); k >= 0; k--)
#define ALL(c) (c).begin(), (c).end()
#define FILL1D(arr, val) fill((&arr[0]), (&arr[0] + sizeof(arr)), val)
#define FILL2D(arr, val) fill((&arr[0][0]), (&arr[0][0] + sizeof(arr)), val)
#define eps 1e-14
#define INF 1001001001
#define pb push_back

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

int m, n, t;
int main() {
	while (scanf("%d %d %d", &m, &n, &t) != EOF) {
		int minR = INF;
		int maxx = -INF;
		REP(i, t / m + 1) {
			int j = (t - (i * m)) / n;
			int r = (t - (i * m)) % n;
			if (r < minR) {
				minR = r;
				maxx = i + j;
			} else if (r == minR) {
				maxx = max(maxx, i + j);
			}
		}
		if (minR != 0) {
			printf("%d %d\n", maxx, minR);
		} else {
			printf("%d\n", maxx);
		}
	}	
	return 0;
}
