#include<iostream>
using namespace std;
int main(){
    string num1,num2;
    cout<<"enter the num1 and num2: ";
    cin>>num1>>num2;
    int multi;
    int a =stoi(num1);
    int b=stoi(num2);
    multi = a*b;
    cout<<multi;
}