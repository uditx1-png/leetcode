#include<iostream>
using namespace std;
int main(){
    int n,nums[100],k;
    cout<<"enter the number = ";
    cin>>n;
    cout<<"enter the array = ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        k=k^nums[i];
    }
    cout<<k;
}