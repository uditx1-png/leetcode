#include<iostream>
using namespace std;
int main(){
    int n,i,rem,ans=0,place=1;
    cout<<"enter the numeber = ";
    cin>>n;
    while(n!=0){
        rem=n%2;
        if(rem==1){
            rem=0;
        }
        else
            rem=1;
        ans=ans+rem*place;
        place*=10;
        n=n/2; 
    }
    int decimal = 0, p = 1;
    while(ans != 0){
        rem = ans % 10;
        decimal += rem * p;
        p *= 2;
        ans /= 10;
    }
    cout<<decimal;
}