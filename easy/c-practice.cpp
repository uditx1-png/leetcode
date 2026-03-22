#include<iostream>
using namespace std;
int main(){
    int rem,rem1,k,ans=0,x,n,mul=1,sum=0;
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter the base :";
    cin>>k; 
    
    while(n>0){
        rem=n%k;
        n/=k; 
        ans=rem*mul+ans;
        mul*=10;
    };
    cout<<ans;
    cout<<endl;
    while(ans){
        rem1=ans%10;
        ans/=10;
        sum=sum+rem1;
    };
    cout<<sum;
}