#include<iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "enter the number: ";
    cin >> n;
    if(n<=2)
    return 0;
    for (int i = 2; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;   
                break;
            }
        }

        if (isPrime) {
            count++;              
        }
    }

    cout <<  count;
    return 0;
}