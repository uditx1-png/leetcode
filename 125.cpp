#include<iostream>
using namespace std;
int main(){
    string s="race a car";
    string str;
    for(char c : s){
        if(isalnum(c)){
            str.push_back(tolower(c));
        }
    }
    bool flag=true;
     for(int i=0;i<str.size()/2;i++){
        if(str[i]!=str[str.size()-1]){
            flag=false;
            break;
        }
     }
    cout<<flag<<endl;
}