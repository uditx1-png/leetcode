#include<iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cout<<"enter the value of a and b :";
    cin>>a>>b;
    int c=min(a,b);
    for(int i=1;i<=c;i++){
        if(a%i==0&&b%i==0)
        count++;
    }
    cout<<count;
    return 0;

}