#include <algorithm>
#include <cstdio>

int main() {
  int t;
  scanf("%d", &t);
  int a[3];
  int i = 1;
  while (t--) {
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    std::sort(a, a + 3);
    printf ("Case %d: %d\n", i, a[1]);
    i++;
  }
}
