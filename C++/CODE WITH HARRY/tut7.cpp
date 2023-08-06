//Refererence Variables & TYpecasting 
#include<iostream>
using namespace std;

int c=45;

int main()
{
    int a,b,c;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    c=a+b;
    cout <<"The sum is : "<<c<<endl;
    cout<<"The default value of c was : "<<::c<<endl;
    //Bringing Global Variable

    cout<<endl;

    float d=35.5f;//for float at end we can write 'f or F' in end
    long double e= 35.5l;//for long double we can write 'l or L' in end
    cout<<"d = "<<d<<", e = "<<e<<endl;

    cout<<endl;

    cout<<"The size of 34.4 is :"<<sizeof(34.4)<<endl;//default - double

    cout<<"The size of 34.4f is :"<<sizeof(34.4f)<<endl;//f: float 
    cout<<"The size of 34.4F is :"<<sizeof(34.4F)<<endl;

    cout<<"The size of 34.4l is :"<<sizeof(34.4l)<<endl;//l: long double 
    cout<<"The size of 34.4L is :"<<sizeof(34.4L)<<endl;

    cout<<endl;

    //Reference Variables
    //Rounak ---> Deep ---> Youthooober
    float x = 100;
    float & y = x; //& is reference declarator
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    cout<<endl;

    //Typecasting 
    int m=45;
    cout<<"The value of m is :"<<m<<endl;
    cout<<"The value of m is :"<<(float)m<<endl;//it can be both ways
    cout<<"The value of m is :"<<float(m)<<endl;
    float n=45.45;
    cout<<"The value of n is :"<<n<<endl;
    cout<<"The value of n is :"<<(int)n<<endl;
    cout<<"The value of n is :"<<int(n)<<endl;

    int o = int(n);

    cout <<"m + n ="<<m+n<<endl;
    cout <<"m + n ="<<m+int(n)<<endl;
    cout <<"m + n ="<<m+(int)n<<endl;
    return 0;
}