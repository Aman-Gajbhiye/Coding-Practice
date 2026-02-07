#include<iostream>
using namespace std;
int cal(int w, int d){
    int sum;
    sum = 5 + w*2 + d*0.5/10;
    return sum;
}
int main(){
    int w,d;
    cin>>w>>d;
    cout<<cal(w,d);
}
