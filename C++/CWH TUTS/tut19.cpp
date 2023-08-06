//Function Overloading

#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<"Function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a , int b, int c ){
        cout<<"Function with 3 arguments"<<endl;
    return a+b+c;
}

//Calculate Volume of cylinder
int vol(double r , int h ){
    return(3.14*r*r*h);
}

//cube Vol
int vol(int a){
    return a*a*a;
}

//Cubpoid Vol 
int vol(int l , int b , int h){
    return l*b*h;
}
int main(){
    cout<<"the Sum : "<<sum(3,8)<<endl;
    cout<<"the Sum : "<<sum(3,8,10)<<endl;   

    //Cuboid 
    cout<<vol(1,2,3)<<endl;

    //Cylinder 
    cout<<vol(1,2)<<endl;

    // Cube 
    cout<<vol(2)<<endl;
    return 0;
}