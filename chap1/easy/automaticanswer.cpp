#include <cstdio>
#include <cmath>

int main() {
  int t, n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int digit = std::fabs(((315 * n + 36962) % 100) / 10);
    printf("%d\n", digit);
  }
  return 0;
}
