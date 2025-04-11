#include<iostream>
#include<string>
using namespace std;
class Percentage{
    int rollNo;
    string name;
    int arr[5];
    int x;
    float percen;
    string st;

public:
    void details(){
       cout<<"Eter details";
       cin>>name;
       cin>>rollNo;
    }
    void inputmarks(){
        cout<<"enter marks";
        for(int i=0;i<5;i++){
            cin>>arr[i];
         }
        x=0;
        for(int i=0;i<5;i++){
         x = x+arr[i];
        }
    }
    void percent(){
        percen=x/5;
    }

    void grade(){
        if(percen>=90){
            st="A";
        }else if(percen>=80){
            st="B";
        }else if(percen>=70){
            st="C";
        }else if(percen>=60){
            st="D";
        }else{
            st="Fail";
        }
    }
    void display(){
        cout<<name<<endl;
        cout<<rollNo<<endl;
        cout<<st;
    }
 
};
int main(){
    Percentage classA;
    classA.details();
    classA.inputmarks();
    classA.percent();
    classA.grade();
    classA.display();

}

