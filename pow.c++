#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a;
    int b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<endl;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<endl;
    float c =pow(a, b); 
    cout << fixed << setprecision(5) << c;
};