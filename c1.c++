#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0,prod=1;
    cout<<"enter the number :";
    cin>>n;
        while(n>0){
            rem=n%10;
            sum+=rem;
            prod*=rem;
            n/=10;
        };

        cout<<prod-sum;
};