/// UVA 462 - Bridge Hand Evaluator

#include <cstdio>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
  char card[2];
  while (scanf("%s", card) == 1) {
    int point1_4 = 0;
    int point5_7 = 0;
    map<char, bool> stopped;
    stopped['S'] = false;
    stopped['H'] = false;
    stopped['D'] = false;
    stopped['C'] = false;

    map <char, int> suits;
    suits['S'] = 0;
    suits['H'] = 0;
    suits['D'] = 0;
    suits['C'] = 0;

    // key : A, K, Q, J value : suit list S, H, D, C
    map<char, vector<char>> pointCards;

    for (int i = 0; i < 13; i++) {
      if (i != 0) {
	scanf("%s", card);
      }

      char c = card[0];

      if (c == 'A') {
	point1_4 += 4;
	pointCards['A'].push_back(card[1]);
	stopped[card[1]] = true;
      } else if (c == 'K') {
	point1_4 += 3;
	pointCards['K'].push_back(card[1]);
      } else if (c == 'Q') {
	point1_4 += 2;
	pointCards['Q'].push_back(card[1]);
      } else if (c == 'J') {
	point1_4 += 1;
	pointCards['J'].push_back(card[1]);
      }
      suits[card[1]]++;
    }

    // rule 2
    for (auto& suit : pointCards['K']) {
      if (suits[suit] == 1) {
	point1_4 -= 1;
      } else {
	stopped[suit] = true;
      }
    }

    // rule 3
    for (auto& suit : pointCards['Q']) {
      if (suits[suit] <= 2) {
	point1_4 -= 1;
      } else {
	stopped[suit] = true;
      }
    }

    // rule 4
    for (auto& suit : pointCards['J']) {
      if (suits[suit] <= 3) {
	point1_4 -= 1;
      }
    }
    if (point1_4 >= 16) {
      // check stopped
      bool b = true;
      for (auto& p : stopped) {
	if (!p.second) {
	  b = false;
	  break;
	}
      }
      if (b) {
	printf("BID NO-TRUM\n");
	continue;
      }
    }

    //rule 5
    for (auto& p : suits) {
      if (p.second == 2) {
	point5_7 += 1;
      }
    }

    // rule 6
    for (auto& p : suits) {
      if (p.second == 1) {
	point5_7 += 2;
      }
    }

    // rule 7
    for (auto& p : suits) {
      if (p.second == 0) {
	point5_7 += 2;
      }
    }

    if (point1_4 + point5_7 < 14) {
      printf("PASS\n");
      continue;
    }

    int max = -1000;
    char ss;
    for (auto& p : suits) {
      if (p.second >= max) {
	max = p.second;
	ss = p.first;
      }
    }
    printf("BID %c\n", ss);
  }

  return 0;
}
