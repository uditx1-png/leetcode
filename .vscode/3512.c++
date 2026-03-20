#include<iostream>
using namespace std;
int main(){
    int num,a[100],sum=0,k,count=0;
    cout<<"enter the number :";
    cin>>num;
    cout<<"enter the array: ";
    for(int i=0;i<num;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"enter the divior :";
    cin>>k;
    cout<<sum<<endl;
    if(sum%k==0){
        cout<<"output is 0=";
    }
    while(sum%k!=0){
        sum=sum-1;
        count++;
    };
    cout<<"output is"<<count;

}