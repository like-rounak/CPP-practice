//Arrays


#include<iostream>
using namespace std;

int main(){
    int marks[] = {13, 20, 30, 40};

    int mathMarks[4];
    mathMarks[0] = 3;
    mathMarks[1] = 10;
    mathMarks[2] = 15;
    mathMarks[3] = 20;

    cout<<"These are Math Marks :"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<endl;

    cout<<"These are Total Marks :"<<endl;
    marks[0] = 10;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    cout<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     int k;
    //     k = 1 + i;
    //     cout<<" The value of marks "<<k<<" is :"<<marks[i]<<endl;
    // }
    
    // cout<<endl;

    // int i=0;
    // while (i <=3)
    // {
    //     int k;
    //     k = 1 + i;
    //     cout<<" The value of marks "<<k<<" is :"<<marks[i]<<endl;
    //     i++;
    // }
    
    // int i=0;
    // do
    // {
    //     int k;
    //     k = 1 + i;
    //     cout<<" The value of marks "<<k<<" is :"<<marks[i]<<endl;
    //     i++;
    // } while (i<=3);
    
    //Pointers and arrays 
    int* p = marks;
    cout<<"The Value of marks[0] is : "<<*p<<endl;
    cout<<"The Value of marks[1] is : "<<*(p+1)<<endl;
    cout<<"The Value of marks[2] is : "<<*(p+2)<<endl;
    cout<<"The Value of marks[3] is : "<<*(p+3)<<endl;

    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;

    return 0;
}