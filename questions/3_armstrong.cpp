#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N ;
    cin>>N;
    int n = N;
    int m = N;
    int sum = 0;
    int count = 0;
    while( m != 0 ){
        count++;
        int k = m % 10;
        m = m/10;
    }
    while( n != 0 ){
        int k = n % 10;
        n = n/10;
        sum = sum + pow(k,count);
    }
    if(sum == N){
        cout<<"Amstrong number";
    }
    else{
        cout<<"not";
    }
}
