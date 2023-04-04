//Constants, Manipulators & Operator Precedence
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int a=30;
    cout<<"The Value of A is :"<<a<<endl;
    //containt 'const' - it cant be assigned again
    //a=10; this can be only used agin if 'const'wasn't there
    int b=3 , c=118 , d=24;
    cout<<"Value of b is :"<<b<<endl;
    cout<<"Value of c is :"<<c<<endl;
    cout<<"Value of d is :"<<d<<endl;

    cout<<"Value of b is :"<<setw(4)<<b<<endl;
    cout<<"Value of c is :"<<setw(4)<<c<<endl;
    cout<<"Value of d is :"<<setw(4)<<d<<endl;
    //<iomanip was used for setw manupulator
    //btw endl is also a manupulator
    //setw makes the outuput arraged depending upon characters
    
    //Operator Procedence
    int m=1,n=2;
    int o=m*5+n;
    cout<<"o :"<<o<<endl;
    //almost like BODMAS
    return 0;
}