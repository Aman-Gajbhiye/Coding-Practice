#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> s;
    vector<char> s1;
    int n = sizeof(s)/sizeof(char);
        for(int i = 0; i < n; i++){
                cin>>s[i];
            }
        for(int i = 0; i < n; i++){
            s1.push_back(s[i]);
        }
        for(int i = 0; i < n; i++){
            cout<<s1[i];
        }
}