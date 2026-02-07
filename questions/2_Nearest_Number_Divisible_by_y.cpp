#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
   int diff = x+y;
   int closest;
    for(int i = 1; i <= x+(y/2); i++){
        if(i%y == 0){
            int diff2 = x - i;
            if(diff2 < diff){
                closest = i;
                diff = diff2;
            }
            }

        }
        cout<<closest;

}