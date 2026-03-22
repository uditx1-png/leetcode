#include<iostream>
using namespace std;
int main(){
    int num,rem,sum=0,i;
    cout<<"enter the number :";
    cin>>num;

    if(num<0){
        return 0;
    }
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    cout<<sum;
};