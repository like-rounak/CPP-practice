//Variale Scope and Data Types

#include<iostream>
using namespace std;

/*Types of data types:
1. int   - Numbers 
2. float - decimal
3. bool  - True/False 
4. char  - single alphabet
5. double- like float but big decimal
*/

//global variable 
int a=10;


int main(){

    int a=1; //local variable is given priority
    int b=10;
    float pi = 3.14;

    //a=1 , b= 10
    //Printing value of a and b
    //other way to write 

    int c=10, d= 1;
    cout<<"This is tutorial 4.Here the value of a is :"<<a<<"and b ="<<b;
    
    //line break '\n'

    cout<<"\n c = "<<c<<"\n d= "<<d;
    cout<<"\n pi ="<<pi;

    return 0;
}