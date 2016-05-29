#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  	float h, u, d, f;
  	while (scanf("%f %f %f %f", &h, &u, &d, &f), h != 0) {
  		float current = 0;
  		int days = 0;
  		float fatigue = u * (f / 100);
  		while (true) {
  			days++;
  			current += u;
  			if (current > h) {
  				printf ("success on day %d\n", days);
  				break;
  			}
  			current -= d;
  			if (current < 0) {
  				printf ("failure on day %d\n", days);
  				break;
  			}
  			u -= fatigue;
  			if (u < 0) {
  				u = 0;
  			}
  		}
  	}
  	return 0;
}
