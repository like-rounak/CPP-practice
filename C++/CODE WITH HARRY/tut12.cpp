//Pointers
//data type to hold address of other data types

#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b = &a ;
    
    // & -> (Address of) operator
    cout<<"The Address of A is " <<b<<endl;
    cout<<"The Address of A is " <<&a<<endl;

    cout<<endl;

    // * -> Dereference operator
    cout<<"The value at address B is " <<*b<<endl;
    
    cout<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The address of B is "<<&b<<endl;
    cout<<"The address of B is "<<c<<endl;
    cout<<"The value at address of C is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(C)) is "<<**c<<endl;
    return 0;
}