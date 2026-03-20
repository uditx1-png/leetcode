#include<iostream>
using namespace std;
int main(){
    int num,i,count=0,a[100];
    cout<<"enter the number of element:";
    cin>>num;
    cout<<"enter the element in arary:"<<endl;
    for(i=0;i<num;i++){
        cin>>a[i];
    }
    for(i=0;i<num;i++){
        if(a[i]%3==0)
        continue;
        else{
            count++;
        }
    }
    cout<<"the number of operation done is :";
    cout<<count;
};