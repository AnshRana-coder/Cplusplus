#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
	string win;
	cin>>win;
	int count;
	for(int i=0;i<num;i++){
		if (win[i]==0){
			count++;
		}
	}
	float cost;
	cost=count*sqrt(num)/(num-1);
	cout<<cost;
	
}