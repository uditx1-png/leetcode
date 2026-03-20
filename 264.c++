#include<iostream>
using namespace std;
int main(){
    int rem;
    long long num;
    cout<<"enter the number :";
    cin>>num;
    unsigned int n;
    if (num < 0) {
        n = (unsigned int)(num + (1LL << 32));
    } else {
        n = (unsigned int)num;
    }

    char hexDigits[]="0123456789abcdef";
    string hex=" ";
    if(n==0){
        cout<<"0";
        return 0;
    }
    while(n>0){
        rem=n%16;
        hex=hexDigits[rem]+hex;
        n/=16;
    };
    cout<<hex;
    return 0;
};