#include <iostream>
using namespace std;
    int getSum(int a, int b) {
        while (b != 0) {
            int carry = (unsigned int)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
int main() {
    int a,b;
    cin>>a>>b;
    cout <<getSum(a,b) << endl;
    return 0;
}