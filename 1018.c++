#include<iostream>
using namespace std;

int main() {
    int n;
    int nums[100];

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter binary numbers (0/1): ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int x = 0;   // stores remainder modulo 5
    bool result[100];

    for(int i = 0; i < n; i++){
        x = (x * 2 + nums[i]) % 5;  // maintain only remainder
        result[i] = (x == 0);       // divisible by 5 means remainder 0
    }

    cout << "Output: [";
    for(int i = 0; i < n; i++){
        if(result[i]) cout << "true";
        else cout << "false";
        if(i != n-1) cout << ", ";
    }
    cout << "]";

    return 0;
}