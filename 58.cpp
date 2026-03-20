#include<iostream>
using namespace std;

int main(){

    string str= "luffy is still joyboy";

    int i,count=0;

    // Step 1: skip trailing spaces
    i=str.length()-1;

    while(i>=0 && str[i]==' '){
        i--;
    }

    // Step 2: count last word length
    while(i>=0 && str[i]!=' '){
        count++;
        i--;
    }

    cout<<count;

}