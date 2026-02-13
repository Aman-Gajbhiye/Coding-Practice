#include<iostream>
using namespace std;
int reverse(int n){
    int m = n;
    int rev = 0;
    while(m!=0){
        int k = m % 10;
        rev = rev*10 + k;
        m = m/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
}