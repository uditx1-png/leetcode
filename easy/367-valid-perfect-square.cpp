#include<iostream>
using namespace std;
 int main(){
    int num,ans;
    cout<<"enter the number :";
    cin>>num;
    int temp=num;
    if(num<0){
        return 0;
    }
    ans=sqrt(temp);
    cout<<ans;
    if(ans*ans==num){
        cout<< "true";
    }
    return 0;
 }