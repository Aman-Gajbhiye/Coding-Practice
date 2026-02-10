#include<iostream>
using namespace std;
int count(int n, int m){
    int c = 0;
    while(n!=0){
        int k = n % 10;
        if(k == m){
            c++;
        }
        n = n/10;
    }
    return c;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<count(n,m);
}