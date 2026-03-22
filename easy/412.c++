#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number :";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%3==0&&i%5==0)
            cout<<"FizzBuzz";
        else if(i%3==0)
            cout<<"Fizz";
        else if(i%5==0)
            cout<<"Buzz";
        else
            cout<<i<<" ";
    }
    return 0;
}