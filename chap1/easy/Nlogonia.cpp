/**
 * UVA 11498 - Division of Nlogonia
 * Avirmed Munkhbat
 **/

 #include <cstdio>

 int main() {
   int k;
   ;
   
   while(scanf("%d", &k), k != 0) {
      int n, m;
      scanf("%d %d", &n, &m);
      while (k--) {
	int x, y;
	scanf("%d %d", &x, &y);
	if (n == x || m == y) {
	  printf("divisa\n");
	} else if (x > n && y > m) {
	  printf("NE\n");
	} else if (x > n && y < m) {
	  printf("SE\n");
	} else if (x < n && y > m) {
	  printf("NO\n");
	} else if (x < n && y < m) {
	  printf("SO\n");
	}
      }
      
   }
   return 0;
 }
