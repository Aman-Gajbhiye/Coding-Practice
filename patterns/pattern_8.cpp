#include<iostream>
using namespace std;
int f(int n){
    if(n==0 or n==1){
        return n;
    }
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    cin>>n;
    int k=0;
    for(int i = 1; i <= n; i++){
        for(int j=1;j<=i;j++){
            cout<<f(k)<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
