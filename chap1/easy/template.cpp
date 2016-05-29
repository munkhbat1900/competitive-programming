// UVA 11172 - Relational Operator
#include <cstdio>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		if (a > b) {
			printf(">\n");
		} else if (a == b) {
			printf("=\n");
		} else {
			printf("<\n");
		}
	}
	return 0;
}
