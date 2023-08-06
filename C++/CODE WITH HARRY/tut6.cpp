//Header Files and Operators

#include<iostream>
using namespace std;

//Two types of Header files :
/* 
   1. System Header Files - Comes with Compiler 
   eg- #include<iostream

   2. User Defined Header Files - Written by user 
   eg- #include "this.h" 
*/

int main()
{
    int a=15, b=10;
    //Types of Operators :

    //1. Arithmetic Operator
    cout<<"A = 15 , B = 10"<<endl;

    cout<<"Arithmatic Operating... "<<endl;

    cout<<"a + b :"<<a+b<<endl;//Using 'endl' ends the line
    cout<<"a - b :"<<a-b<<endl;
    cout<<"a * b :"<<a*b<<endl;//multiply
    cout<<"a / b :"<<a/b<<endl;//divides     
    cout<<"a % b :"<<a%b<<endl;//remainder
    
    cout<<endl;

    cout<<"a ++ :"<<a++<<endl;//after result , a=16
    cout<<"a -- :"<<a--<<endl;//after result , a=15
    cout<<"++ a :"<<++a<<endl;//a= 16 , then result
    cout<<"-- a :"<<--a<<endl;//a=15 , then result
    cout<<endl;

    //2. Assignment Operators : Used to assign values to variables
    //int a=1, b=2;
    //char d='d';

    //3. Comparision Operators 
    cout<<"Comparing Variables..."<<endl;
    cout<<"a == b :"<<(a==b)<<endl;//Parenthesis are imp to not confuse compiler
    cout<<"a != b :"<<(a!=b)<<endl;//not equal to
    cout<<"a <= b :"<<(a<=b)<<endl;//less than equal to
    cout<<"a >= b :"<<(a>=b)<<endl;//greator than equal to
    cout<<"a < b :"<<(a<b)<<endl;//less than
    cout<<"a > b :"<<(a>b)<<endl;//greator than
    cout<<endl;

    //4. Logical Operator 
    cout<<"Local Operator Applying..."<<endl;
    cout<<"a == b && a < b :"<<((a==b)&&(a<b))<<endl;//&& : and
    cout<<"a != b && a > b :"<<((a!=b)&&(a>b))<<endl;
    cout<<"a==b || a!=b :"<<((a==b)||(a!=b))<<endl; // || : or
    cout<<"a<b || a>b :"<<((a<b)||(a>b))<<endl;
    cout<<endl;

    return 0;
}