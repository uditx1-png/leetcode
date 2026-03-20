#include<iostream>
using namespace std;
int main(){
    int num,deno;
    float op;
    cout<<"enter the numberator :";
    cin>>num;
    cout<<"enter the denomenator :";
    cin>>deno;
    if(deno==0)
    return 0;
    op=float(num)/deno;
    cout<<op;
};