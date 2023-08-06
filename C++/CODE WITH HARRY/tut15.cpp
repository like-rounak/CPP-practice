//Functions and Function 

#include<iostream>
using namespace std;

int sum(int a , int b ){
    int c= a+b;
    //a and b will be taking values 
    // from actual parameters num1 and num2 
    return c;
}

//Function Prototype
// type function-name (argments);
// int sum(int a , int b ); ---->Accpetptable 
// int sum(int a , b ); ---->NOT Accpetptable 
// int sum(int , int ); ---->Accpetptable 
void g();

int main(){
    g();

    int num1, num2;
    cout<<"Enter first Number :"<<endl;
    cin>>num1;
    cout<<"Enter Second Number :"<<endl;
    cin>>num2;

    //num1 and num2 are actual parameters

    cout<<"The sum is :"<<sum(num1,num2);

    return 0;
}

void g(){
    cout<<"Program begins from here \n";
}