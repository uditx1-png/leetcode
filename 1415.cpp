#include <iostream>
#include <vector>
using namespace std;

void generate(int n, string curr, vector<string>& res) {
    
    if(curr.length() == n) {
        res.push_back(curr);
        return;
    }

    for(char ch = 'a'; ch <= 'c'; ch++) {
        if(curr.empty() || curr.back() != ch) {
            generate(n, curr + ch, res);
        }
    }
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<string> res;

    generate(n, "", res);

    if(k > res.size())
        cout << "";
    else
        cout << res[k-1];

    return 0;
}