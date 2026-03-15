#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int left = 1;
    int right = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
            left = left * arr[j];
        }
        for(int k = i + 1; k < n; k++){
            right = right * arr[k];
        }
        b[i]= left * right;
        left = 1;    
        right = 1;
    }

    for(int i = 0; i < n; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}