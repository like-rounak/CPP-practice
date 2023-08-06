#include<iostream>
using namespace std;

int main()
{
    /* Loops in C++:
1. For Loop
2. While Loop
3. Do While Loop */

// For Loop in C++ 

/* Syntax:
 for (initialization ; condition ; updation)
 {
    loop body(C++ code);
 } */

    // for (int i = 1; i <=40; i++)
    // {
    //     cout<<i<<endl;
    // }
    

// WHILE LOOP

    /*Syntax:
    while (condition)
    {
        C++ statements;
    } */

    // int i=1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

//DO WHILE LOOP
// do
// {
//     /* code */
// } while (/* condition */);

// int i=1;
// do
// {
//     cout<<i<<endl;
//     i++;
// } while (i<=40);

    int a,i=1,k;
    cout<<"What is your Desired Multiple :"<<endl;
    cin>>a;
    cout<<"Until which multiple do u want it :"<<endl;
    cin>>k;
    cout<<"Multiple of "<<a<< " are as follows :"<<endl;
    do
    {
        cout<<"Multiple with "<<i<<" is = ";
        cout<<i*a<<endl;
        i++;
    } while (i<=k);
    return 0;
}