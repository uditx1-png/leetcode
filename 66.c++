#include<iostream>
using namespace std;

int main() {
    int n, i;
    int a[100];

    cout << "enter the number: ";
    cin >> n;

    cout << "enter the elements in array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    // add +1 to last element only
    a[n-1] = a[n-1] + 1;

    cout << "updated array: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}