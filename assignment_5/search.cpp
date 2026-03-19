#include<iostream>
using namespace std;
int main() {
    int n,m, count = 0;;
	cin>>n>>m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
	    }
	}
    int t;
    cin>>t;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
            if(a[i][j] == t){
                count++;
            }
	    }
	}
    if(count>0){
        cout<<1;
    }
    else{
        cout<<0;
    }
	
	return 0;
}