/// UVA 10141 - Request for Proposal
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);
	int n, p, counter = 0;
	while (scanf("%d %d\n", &n, &p)) {
		if (!(n || p)) {
			break;
		}
		if (counter > 0) {
			printf("\n");
		}
		counter++;
		
		for (int i = 0; i < n; i++) {
			string req = "";
			getline(cin, req);
		}
		float max = -1000000000.0;
		float minPrice = 1000000000.0;
		string ans = "";
		for (int i = 0; i < p; i++) {
			string prop = "";
			getline(cin, prop);
			float d;
			int r;
			scanf("%f %d\n", &d, &r);
			for (int k = 0; k < r; k++) {
				string name = "";
				getline(cin, name);
			}

			float compliance = (float)r / p;
			
			if ((max < compliance) || (max == compliance && minPrice > d)) {
				ans = prop;
				max = compliance;
				minPrice = d;
			} 
		}
		printf ("RFP #%d\n%s\n", counter, ans.c_str());
	}
	return 0;
}