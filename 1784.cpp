#include<iostream>
using namespace std;

int main(){
    string s = "1111";
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                return false;
            }
        }
        return true;
};