#include<iostream>
using namespace std;
int main(){
    int tank,add;
    cout<<"enter the value of tank:";
    cin>>tank;
    cout<<"enter the value of add:";
    cin>>add;
     int distance = 0;
        while(tank >= 5) {
            distance += 50; // 5 liters * 10 km/liter
            tank -= 5;

            if(add > 0) {
                tank++;
                add--;
            }
        }

        // use remaining fuel
        distance += tank * 10;

        cout<< distance;
    

}