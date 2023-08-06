// Call by Value & Call by Reference

#include<iostream>
using namespace std;

int sum (int a, int b ){
    int c = a+b;
    return c;
}

void swap(int a , int b){
    int temp=a;
    a=b;
    b=temp;
}

void swappointer (int* a , int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
} //  Call by ref using pointers


void swappointerVar (int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
} //  Call by ref using ref variables 

int main(){

    int x=4, y=5;
    cout<<"The sum of x and y is : "<<sum(x,y)<<endl;
    swap(x,y);
    cout<<x<<endl<<y<<endl; // x and  y will notchange

    cout<<endl;

    swappointer(&x,&y);
    cout<<x<<endl<<y<<endl;

    cout<<endl;

    x=4,y=5;

    swappointerVar(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}