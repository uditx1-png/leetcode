#include<iostream>
using namespace std;
int main(){
    string haystack, needle;
    cout<<"enter the two string= ";
    cin>>haystack>>needle;
    int n = haystack.size();
    int m = needle.size();
    bool found = false;
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == m) {
            cout << i << endl;
            found = true;
            break;  // stop after first occurrence
        }
    }
    if (!found) {
        cout << -1;
    }
    return 0;
}