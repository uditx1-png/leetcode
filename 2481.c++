#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of cut requird:";
    cin>>num;
    if(num<=1)
    return 0;
    if(num%2==0){
        cout<<num/2;
    }
    else{
        cout<<num;
    }
} 