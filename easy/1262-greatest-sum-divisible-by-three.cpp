#include<iostream>
using namespace std;
int main(){
    int n,i,a[100],sum=0,rem;
    cout<<"enter the number of element in array: ";
    cin>>n;
    cout<<"enter the element in array: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
    if(sum%3==0)
    cout<<sum;
    else if(sum%3!=0){
        rem=sum%3;
        sum=sum-rem;
        cout<<sum;
    }
};