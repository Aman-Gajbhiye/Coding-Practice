#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i <= n ; i++){
        cin>>arr[i];
    }

    for(int i = 1; i <= n ; i++){
        if(arr[i]%4 == 0 or arr[i]%3 == 0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no";
        }
    }

	return 0;
}