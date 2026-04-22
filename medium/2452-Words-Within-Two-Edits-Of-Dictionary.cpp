#include<iostream>
#include<vector>
using namespace std;
vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries.size();
        int m =dictionary.size();
        vector<string>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                for(int k=0;k<queries[i].size();k++){
                    if (queries[i][k] != dictionary[j][k]) {
                    count++;
                }
                if (count > 2) break;
            }
            if (count <= 2) {
                ans.push_back(queries[i]);
                break;
                }
            }
        }
        return ans;
    }
int main(){
    int n,m;
    cout<<"enter the size of queries = ";
    cin>>n;
    cout<<"enter the size of dictionary  = ";
    cin>>m;

    vector<string> queries(n);
    vector<string> dictionary(m);
    cout<<"enter the queries = "<<endl;;
    for(int i=0;i<n;i++){
        cin>>queries[i];
    }
    cout<<"enter the dictionary = ";
    for(int i=0;i<m;i++){
        cin>>dictionary[i];
    }
    vector<string> result = twoEditWords(queries, dictionary);
    cout << "\nResult:\n";
    for (auto &word : result) {
        cout << word << " ";

    }
    return 0;
}