#include<iostream>
using namespace std;
int main(){
    int num,a[199];
    cin>>num;
    int mul=1;
    for(int i=0;i<num;i++){
        cin>>a[i];
        mul*=a[i];
    }
    cout<<mul;
    
}