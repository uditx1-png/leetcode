#include<iostream>
using namespace std;

int nthUglyNumber(int n) {
    if(n <= 0) return false;   // negative and zero are NOT ugly
    int i;
    for(i=0;i<n;i++){
    while(n % 2 == 0) n /= 2;
    while(n % 3 == 0) n /= 3;
    while(n % 5 == 0) n /= 5;
    }
    cout<<i;   // if after dividing only 1 remains → ugly
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int nthUglyNumber(int n); 
    
}