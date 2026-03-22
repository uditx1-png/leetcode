#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n, i;
    int a[100], sum = 0;

    cout << "enter the number of elements: ";
    cin >> n;

    cout << "enter the elements in array:" << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 3 == 0) {
        cout << sum;
        return 0;
    }

    int rem = sum % 3;
    int smallestR1 = INT_MAX, smallestR2 = INT_MAX;

    // collect smallest remainders
    for (i = 0; i < n; i++) {
        if (a[i] % 3 == 1)
            smallestR1 = min(smallestR1, a[i]);
        else if (a[i] % 3 == 2)
            smallestR2 = min(smallestR2, a[i]);
    }

    if (rem == 1) {
        sum = sum - smallestR1;
    } else { // rem == 2
        sum = sum - smallestR2;
    }

    cout << sum;
    return 0;
}