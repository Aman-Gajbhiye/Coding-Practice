#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n;
    int rev = 0;
    int count = 0;
    while(m!=0){
        int k = m % 10;
        rev = rev*10 + k;
        m = m/10;
        count++;
    }
    cout<<rev<<endl;
    int arr[count];
    for(int i = 0; i <= n; i++){
        
    }


}
