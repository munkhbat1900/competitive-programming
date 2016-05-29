#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

string getMonthString(int i) {
    return i == 1 ? "month" : "months";
}

int main() {
    int duration, deprecationCount;
    float downpay, amount;

    while (scanf("%d %f %f %d", &duration, &downpay, &amount, &deprecationCount), duration >= 0) {
        float carWorth = amount + downpay;
        float depr[101];
        fill(depr, depr + 101, 0);
        for (int i = 0; i < deprecationCount; i++) {
            int month;
            float percent;
            scanf("%d %f", &month, &percent);
            depr[month] = percent;
        }

        float lastDepr = 0;
        float pay = amount / duration;

        for (int i = 0; i <= duration; i++) {
            if (depr[i] != 0) {
                lastDepr = depr[i];
            }
            carWorth -= carWorth * lastDepr;
            if (i != 0) {
                amount -= pay;
                printf ("%f %f\n", carWorth, amount);
            }
            if (carWorth > amount) {
                cout << i << " " << getMonthString(i) << endl;
                break;
            }
        }
    }

    return 0;
}
