#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(8);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    cout<< v[3]<<endl;
    cout<<v.at(3);
    for(auto x:v){
        cout<<x<<" ";
        cout<<v.front();+
        cout<<v.back();
    }
    
}