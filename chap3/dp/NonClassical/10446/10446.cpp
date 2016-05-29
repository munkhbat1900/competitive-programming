#include <cstdio>

int n, back;
unsigned long long dp[62][62] = {0};

unsigned long long trib(int n, int back) {
	if (n <= 1) {
		return 1;
	}

	if (dp[n][back] != 0) {
		return dp[n][back];
	}
	dp[n][back] = 1;
	for(int i=1;i <= back;i++) {
		dp[n][back] += trib(n-i,back);
	}

	return dp[n][back];
}

int main() {
	int counter = 1;
	while (scanf("%d %d", &n, & back), n < 61) {
		printf("Case %d: %llu\n", counter, trib(n, back));
		counter++;
	}
}
