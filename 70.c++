#include<iostream>
using namespace std;
int main(){
    int num,a=1,b=2,c,i;
    cout<<"enter the number :";
    cin>>num;

    if(num<=2){
        return num;
    }
    for(i=3;i<=num;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b;
};