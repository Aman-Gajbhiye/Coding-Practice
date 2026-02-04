#include<iostream>
using namespace std;
int main(){
    int l1, l2, l3;
    cin>>l1>>l2>>l3;
    if(l1 == l2  && l2== l3){
        cout<<"Equilateral";
    }
    else if((l1 == l2 ) || (l3 == l2) || (l1 == l3)){
        cout<<"Isoceles";
    }
    else if(l1 != l2 && l2 != l3){
        cout<<"Scalene";
    }
}