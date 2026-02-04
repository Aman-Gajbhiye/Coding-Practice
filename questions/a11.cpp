#include<iostream>
using namespace std;
int main(){
    int n;
    if(n<60){
        cout<<"fail";
    }
    else if(n>=60 && n<75){
        cout<<"C";
    }
    else if(n>=75 && n<90){
        cout<<"B";
    }
    else{
        cout<<"A";
    }
}