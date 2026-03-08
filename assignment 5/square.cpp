#include <iostream>
using namespace std;
int main() {
       int n;
    cin>>n;
    int arr[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i = 0; i < n; i++){
		b[i] = arr[i]*arr[i];
	}
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
		cout<<b[i]<<" ";
	}

}