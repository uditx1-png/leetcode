#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string s1_even = "", s1_odd = "";
    string s2_even = "", s2_odd = "";
    // Separate even and odd indices
    for(int i = 0; i < s1.size(); i++) {
        if(i % 2 == 0) {
            s1_even += s1[i];
            s2_even += s2[i];
        } else {
            s1_odd += s1[i];
            s2_odd += s2[i];
        }
    }
    // Sort both parts
    sort(s1_even.begin(), s1_even.end());
    sort(s1_odd.begin(), s1_odd.end());
    sort(s2_even.begin(), s2_even.end());
    sort(s2_odd.begin(), s2_odd.end());
    // Compare
    if(s1_even == s2_even && s1_odd == s2_odd)
        cout << "true";
    else
        cout << "false";
    return 0;
}