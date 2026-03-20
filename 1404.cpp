#include<iostream>
using namespace std;

int main() {

    string binary = "1";

    int num = 0, rem=0;;
    if(binary=="1"){
        cout<<rem;
        return 0;
    }

    for(int i=0; i<binary.size(); i++)
    {
        num = num * 2 + (binary[i] - '0');
    }
    while(num!=1){
        if(num%2==0){
            num=num/2;
        }
        else{
            num+=1;
        }
        rem++;
    }

    cout << "Decimal = " << num;

    return 0;
}