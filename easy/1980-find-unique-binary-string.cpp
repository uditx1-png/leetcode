#include<iostream>
#include<vector>
using namespace std;

vector<string> arr;

string gen(int n, string s){
    if(s.size() == n){
        for(string x : arr){
            if(x == s)
                return "";
        }
        return s;   // missing string found
    }

    string left = gen(n, s + "0");
    if(left != "") return left;

    string right = gen(n, s + "1");
    if(right != "") return right;

    return "";
}

int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;

    arr.resize(n);

    cout<<"Enter binary strings:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
}