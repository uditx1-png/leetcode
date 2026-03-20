#include<iostream>
using namespace std;

unsigned int reverseBits(unsigned int n) {
    unsigned int rev = 0;

    for(int i = 0; i < 32; i++){
        rev = (rev << 1) | (n & 1);
        n = n >> 1;
    }

    return rev;
}

int main(){
    unsigned int n = 43261596;

    cout << reverseBits(n);

    return 0;
}