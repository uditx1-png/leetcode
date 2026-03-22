#include <iostream>
#include <climits>
using namespace std;

int reverseNumber(int x) {
    int ans = 0, rem;

    while (x != 0) {
        rem = x % 10;
        x /= 10;

        // Overflow check
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            return 0;

        ans = ans * 10 + rem;
    }

    return ans;
}

int main() {
    int x;

    cout << "Enter number: ";
    cin >> x;

    int result = reverseNumber(x);

    cout << "Reversed number: " << result << endl;

    return 0;
}