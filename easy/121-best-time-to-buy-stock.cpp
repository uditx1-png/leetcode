#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num, i, a[100];
    cout << "enter the number of element: ";
    cin >> num;

    cout << "enter the elements in array:" << endl;
    for (i = 0; i < num; i++) {
        cin >> a[i];
    }

    int minP = INT_MAX;
    int profit = 0;

    for (i = 0; i < num; i++) {
        minP = min(minP, a[i]);
        profit = max(profit, a[i] - minP);
    }

    cout << "Maximum Profit = " << profit;

    return 0;
}