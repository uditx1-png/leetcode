#include<iostream>
using namespace std;
int main(){
    int num,rem,sum=0,count=1;
    cout<<"enter the number :";
    cin>>num;
    while(num>0){
        
        rem=num%10;
        num/=10;
        if(count%2==0){
        sum-=rem;
        }
        else{
            sum+=rem;
        }
        count++;
    };
    cout<<sum;
    

};