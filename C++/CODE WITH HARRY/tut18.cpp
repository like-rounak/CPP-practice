//Recursions & Recursive Functions

#include<iostream>
using namespace std;

    //Factorials
int factorial(int n){

    if(n<=1){
        return 1;
    }

    return n * factorial(n-1);
}

// Fibonacci
int fnb(int f){
    if (f<=1){
        return 1;
    }

    return fnb(f-2) + fnb(f-1);
}

int main(){

    int a;
    cout<<"enter :";
    cin>>a;
    cout<<"The Factorial is :"<<factorial(a)<<endl;
    cout<<"The Fibonacci series term is :"<<fnb(a)<<endl;
    cout<<"Your Series is : "<<endl;
    
    if (a<=50)
    {
        int i=0;

        while (i<=a)
        {
            cout<<fnb(i)<<endl;
            i++;
        }
        
    }
    
    

    return 0;
}