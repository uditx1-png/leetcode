#include<iostream>
using namespace std;

int squareSum(int n) {
    int sum = 0, rem;
    while(n > 0) {
        rem = n % 10;
        sum += rem * rem;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    // Repeat until number becomes 1 or 4
    while(num != 1 && num != 4) {
        num = squareSum(num);
    }

    if(num == 1)
        cout << "Happy Number";
    else
        cout << "Not a Happy Number";

    return 0;
}