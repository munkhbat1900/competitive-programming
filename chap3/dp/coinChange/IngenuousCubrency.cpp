#include <cstdio>

long long dp[21][10001];
int coins[21];

void solve() {
		
		for (int i = 0; i < 21; i++) {
			coins[i] = (i + 1) * (i + 1) * (i + 1);
		}

		for (int i = 0;  i < 21; i++) {
			dp[i][0] = 1;
		}

		for (int i = 0;  i < 21; i++) {
			for (int j = 1; j < 10001; j++) {
				dp[i][j] = i - 1 >= 0 ? dp[i - 1][j] : 0;
				dp[i][j] += j - coins[i] >= 0 ? dp[i][j - coins[i]] : 0;
			}
		}
	}

int main() {
	solve();
	int n;
	while (scanf("%d", &n) == 1) {
		printf("%lld\n", dp[20][n]);
	}
	return 0;
}