//Control Structures

// 1. Sequence Structure 
//flowchart start ,actions and stop

// 2. Selection Structure 
//flowchart conditional type 

// 3. Loop Structure 
//conditional check and check again - LOOP

#include<iostream>
using namespace std;
int main()
{
    // Selection Control Structure : If-else-if ladder

    
    int age ;
    cout<<"Tell me your Age : ";
    cin>>age;

    /*
    if ((age<18)&&(age>0)){
        cout<<"Nah Kiddo , u can't come . Sorry!"<<endl;
    }
    else if (age<=0){
        cout<<"Holy! You not born."<<endl;
    }
    else{
        cout<<"You are openly Welcomed . Hope to see you soon !"<<endl;
    
    }
    return 0;
    */

   

   // Selection structure : Switch case statement 

   switch (age)
   {
   case 18:
    /* code */
    cout<<"You are 18"<<endl;
    break;

   case 22:
    /* code */
    cout<<"You are 22"<<endl;
    break;   

   case 2:
    /* code */
    cout<<"You are 2"<<endl;
    break;

   default:
   cout<<"No Special Cases"<<endl;

    break;
   }
}