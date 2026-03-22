#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int last = -1;
    int maxDist = 0;
    int pos = 0;

    while(n > 0){

        if(n % 2 == 1){

            if(last != -1){

                maxDist = max(maxDist, pos - last);
            }

            last = pos;
        }

        n = n / 2;
        pos++;
    }

    cout<<maxDist;
}