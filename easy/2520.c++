#include<iostream>
using namespace std;
int main(){
    int num,rem,count=0;
    cout<<"enter the number :";
    cin>>num;
    int temp=num;
    while(temp>0){
    rem=temp%10;
    temp/=10;
    if(rem!=0&&num%rem==0)
    count++;
    };
    cout<<count;
    return 0;
};