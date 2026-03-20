#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter the number:";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%3==0||i%5==0||i%7==0){
            sum+=i;
        }
    }
    cout<<sum;
    


}