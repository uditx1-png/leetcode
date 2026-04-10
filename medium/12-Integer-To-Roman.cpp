#include<iostream>
#include<vector>
using namespace std;

string intToRoman(int num) {
    vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 
                          10, 9, 5, 4, 1};    
    vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", 
                              "L", "XL", "X", "IX", "V", "IV", "I"};
    string result = "";
    for(int i = 0; i < value.size(); i++) {
        while(num >= value[i]) {
            result += symbols[i];
            num -= value[i];
        }
    }
    return result;
}
int main() {
    int num;
    cout << "Enter number (1 to 3999): ";
    cin >> num;

    cout << "Roman numeral: " << intToRoman(num);
}