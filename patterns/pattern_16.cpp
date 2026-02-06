#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = n; i >=1 ; i--){
        if(i == n or i == 1){
            for(int j = 1; j<=n;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int j = 1; j <= n-2; j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
	return 0;
}