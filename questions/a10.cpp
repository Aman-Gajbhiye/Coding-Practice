#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int max;
    max = a;
    if (max<b){
        max = b;
    }
    else if(max<c){
        max = c;
    }
    cout<<max;
}