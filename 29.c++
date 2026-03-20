#include<iostream>
using namespace std;
int main(){
    int dividend,divisor;
    cout<<"enter the dividend : ";
    cin>>dividend;
    cout<<"enter the divisor: ";
    cin>>divisor;
    if(dividend==INT_MIN && divisor==-1)
        cout<<INT_MAX;
    int ans;
    ans=dividend/divisor;
    cout<<ans;
    return 0;
}