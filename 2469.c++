#include<iostream>
using namespace std;
int main(){
    double cel,kel,fahren;
    cout<<"enter the celsius :";
    cin>>cel;
    kel=cel+273.5;
    fahren=cel*1.8+32.00;
    double a[2]={kel,fahren};
    cout<<"kelvin"<<a[0]<<endl;
    cout<<"fahrenhite"<<a[1]<<endl;
    return 0;
}