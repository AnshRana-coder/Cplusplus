#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-i;j++){
            if((i==1&&j<=n) || i==n || j==1 || (i==2*n-j)){
              cout<<"*"<<" ";
            }else{
                cout<<"  ";
            }