/// UVA 00119 Greedy Gift Givers

#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int findIndex(vector<pair<string, int>>& pairs, string name) {
    int counter = 0;
    for (auto pair : pairs) {
        if (pair.first == name) {
            return counter;
        }
        counter++;
    }
    return -1;
}

int main() {
    int counter = 0;
    int num = 0;
    cin.tie(0);
    ios::sync_with_stdio(false);
    while (scanf("%d", &num) == 1) {
        if (counter > 0) {
            printf("\n");
        }
        // key : name, value : money
        vector<pair<string, int>> nameMoneyPair;
        for (int i = 0; i < num; i++) {
            string s;
            cin >> s;
            nameMoneyPair.push_back(make_pair(s, 0));
        }

        for (int i = 0; i < num; i++) {
            string name = "";
            cin >> name;
            int giveAmount = 0, giveCount = 0;
            scanf("%d %d", &giveAmount, &giveCount);
            if (giveCount != 0) {
                int index = findIndex(nameMoneyPair, name);
                nameMoneyPair[index].second = giveAmount - giveAmount % giveCount;
            }
            for (int j = 0; j < giveCount; j++) {
                string str = "";
                cin >> str;
                int index = findIndex(nameMoneyPair, str);
                nameMoneyPair[index].second += giveAmount / giveCount;
            }
        }

        for (auto pair : nameMoneyPair) {
            printf("%s %d\n", pair.first.c_str(), pair.second);
        }
        counter++;
    }
    return 0;
}
