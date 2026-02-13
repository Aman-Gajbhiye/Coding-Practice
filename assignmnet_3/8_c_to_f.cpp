#include<iostream>
using namespace std;
int main(){
    int min,max,n;
    cin>>min>>max>>n;
    float f = 5.0/9.0;
    for(int i = min; i <= max; i = i + n){
        int c = (i - 32)*(f);
        cout<<i<<" "<<c<<endl;
    }
}