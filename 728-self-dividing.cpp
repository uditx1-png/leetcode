#include<iostream>
#include<vector>
using namespace std;

// Function to check self dividing
bool isSelfDividing(int num) {
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit == 0 || num % digit != 0) {
            return false;
        }

        temp /= 10;
    }
    return true;
}

int main() {
    int left, right;
    cout << "Enter range: ";
    cin >> left >> right;

    vector<int> result;

    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            result.push_back(i);
        }
    }

    // Print vector
    cout << "Self Dividing Numbers: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}