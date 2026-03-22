#include<iostream>
using namespace std;
int main(){
    int num,c;
    cout<<"enter the number :";
    cin>>num;
    if(num%2!=0){
        c=num*2;
        cout<<c;
    }
    else{
        cout<<num;
    }
    return 0;
};