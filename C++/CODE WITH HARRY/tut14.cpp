//Structures , Unions & Enums
#include<iostream>
using namespace std;

typedef struct employee //typedef shortcut
{
    /* data */
    int eID; //4
    char favChar; //1
    float salary; //4
} ep;//ep shortcut after using type def

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
    enum meal{breakfast , lunch , dinner }; //enum
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    meal mm1 = breakfast;
    cout<<mm1<<endl;
    cout<<(mm1==1)<<endl;

    cout<<endl;

    union money m1;// Union
    m1.rice =34;
    m1.car = 'c';
    cout<<m1.car<<endl;
    
    cout<<endl;

    struct employee rounak;
    ep rohan;
    ep don; // Tpe def shortcut
    rounak.eID =1;
    rounak.favChar='c';
    rounak.salary=10000;
    cout<<"The Value is : "<<rounak.salary<<endl;
    cout<<"The Value is : "<<rounak.favChar<<endl;
    cout<<"The Value is : "<<rounak.eID<<endl;

    return 0;
}