/*
 * OptimalParking.cpp
 *
 *  Created on: Jun 1, 2015
 *      Author: Avirmed Munkhbat
 */

#include <cstdio>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n = 0;
    scanf("%d", &n);
    int max = -100000;
    int min = 100000;
    for (int i = 0; i < n; i++) {
      int x;
      scanf("%d", &x);
      if (x > max) {
	max = x;
      }
      if (x < min) {
	min = x;
      }
    }
    printf("%d\n", 2 * (max - min));
  }
  return 0;
}


