#include<iostream>
using namespace std;
void series(int n1, int n2){
    int i = 1;
    int terms = 0;
    while(i != 0){
        int n = 3*i+2;
        if(n%n2 != 0){
        cout<<n<<endl;
        terms++;
        }
        i++;
        if(terms == n1){
            break;
        }
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    series(n1,n2);
    
}