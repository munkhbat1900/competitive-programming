#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>

/**
 * @author munkhbat
 * UVA 10313 - Pay the Price
 */
	 int n, l1, l2;
	 int coins[300];
	 long long dp[300][301];
	 using namespace std;

	void solve() {
		for (int i = 0; i < 300; i++) {
			coins[i] = i + 1;
		}
		// dp[m][n] : count of ways we can sum coins[0..m-1] to get n.
		for (int i = 0; i < 300; i++) {
			dp[i][0] = 1;
		}

		for (int i = 0; i < 300; i++) {
			for (int j = 1; j <= 300; j++) {
				dp[i][j] = i > 0 ? dp[i - 1][j] : 0;
				dp[i][j] += j - coins[i] >= 0 ? dp[i][j - coins[i]] : 0;
			}
		}
	}

	int main() {
		solve();
		ios::sync_with_stdio(false);
		string line;
		int n[3];
		while (getline(cin, line)) {
			stringstream ss(line);
			int i = 0;
        	while (ss >> n[i]) ++i;

				if (i == 1) {
					printf("%lld\n", dp[300 - 1][n[0]]);
					continue;
				} else {
					l1 = n[1];
				}

				if (i != 3) {
					printf("%lld\n", dp[l1 - 1][n[0]]);
				} else {
					l2 = n[2];
					l2 = l2 > 300 ? 300 : l2;
					if (l1 < 2) {
						printf("%lld\n", dp[l2 - 1][n[0]]);
						continue;
					}
					printf("%lld\n", dp[l2 - 1][n[0]] - dp[l1 - 2][n[0]]);
				}
		}
	}


