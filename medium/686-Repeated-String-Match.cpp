#include <iostream>

using namespace std;

class Solution {
public:
    int KMP_MATCH(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return 1;
        }
        return -1;
    }

    int repeatedStringMatch(string a, string b) {
        if (a == b) return 1;

        string temp = a;
        int repeat = 1;

        while (temp.size() < b.size()) {
            temp += a;
            repeat++;
        }

        if (KMP_MATCH(temp, b) == 1)
            return repeat;

        if (KMP_MATCH(temp + a, b) == 1)
            return repeat + 1;

        return -1;
    }
};

int main() {
    Solution obj;

    string a, b;
    
    cout << "Enter string a: ";
    cin >> a;

    cout << "Enter string b: ";
    cin >> b;

    int result = obj.repeatedStringMatch(a, b);

    cout << "Minimum repeats: " << result << endl;

    return 0;
}