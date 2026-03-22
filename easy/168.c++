#include<iostream>
using namespace std;
int main(){
    char name;
    int num;
    cout<<"enter the character:";
    cin>>name;
    if(name>='A'&& name<='Z'){
        num=name-'A'+1;
    }
    else if(name>='a'&& name<='z'){
        num=name='a'+1;
    }
    else if(name>='AA'&& name<='ZZ'){
        num=name='AA'+1;
    cout<<num;
}