//Inline Functions, Default Arguments & Constant Arguments

#include<iostream>
using namespace std;

//Inline fn for small function

inline int product(int a , int b ){ 
    return a*b;
} 
// not in recusion or static variables 
// not in static variables 
//not in loops and all

/* STATIC VARIABLES
    int product(int a , int b =1 ){ 
    static int c=0; // will be initialised only once
    c++;
    return a*b*c;
}
*/
float MoneyReceived(int currentMoney , float factor=1.04){
    return currentMoney*factor;
}

//int strlen(const char *p){
//   CONTANT ARGUMENTS  
//}


int main(){
    int a,b;
    cout <<"Enter The Value of a and b : ";
    cin>>a>>b;
    cout << "The Product of A and B is : "<< product(a,b)<<endl;

    cout<<endl;

    float money;
    cout<<"Money = ";
    cin>>money;

    cout<<"If You have "<<money<<"Rs in bank account , you will receive "<< MoneyReceived(money)<<"Rs after 1 yr "<<endl;
    cout<<endl;   
    cout<<"Vip : "<<money<<"Rs , you will receive "<< MoneyReceived(money,1.1)<<"Rs ";

    return 0;
}
