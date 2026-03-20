#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long result = 0;
    int mod = 1000000007;
    for(int i = 1; i <= n; i++){
    int bits = log2(i) + 1;
    result = ((result << bits) + i) % mod;
    }
    cout<<result;
    }
