//Function Overloading

#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<"Function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a , int b, int c ){
        cout<<"Function with 3 arguments"<<endl;
    return a+b+c;
}

int main(){
    cout<<"the Sum : "<<sum(3,8)<<endl;
    cout<<"the Sum : "<<sum(3,8,10)<<endl;    
    return 0;
}