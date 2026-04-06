#include<iostream>
#include<vector>
using namespace std;
string defangIPaddr(string address) {
        string ans;
        int i=0;
        while(i<address.size()){
            if(address[i]=='.'){
                ans+="[.]";
            }
            else{
                ans+=address[i];
            }
            i++;
        }
        return ans;
    }
int main(){
    string address;
    cin>>address;
    cout<<defangIPaddr(address)<<endl;
    return 0;
}