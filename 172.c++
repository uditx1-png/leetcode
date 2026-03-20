#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"number :";
    cin>>n;
    while(n>0){
        n=n/5;
        count+=n;
    };
    cout<<count;
    return 0;
}