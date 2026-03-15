#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	int b[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < n; j++){
		    if(arr[i] == arr[j]){
				sum = sum + arr[j];
			}
		}
        cout<<sum;
        b[i] = sum/arr[i];
        sum = 0;
	}
    // for(int i = 0; i < n; i++){
	// 	cout<<b[i]<<" ";
	// }

	// int max = b[0];
	// for(int i = 0; i < n; i++){
	// 	if(b[i]>max){
	// 		max = b[i];
	// 	}
	// }
	// cout<<max;

	return 0;
}
