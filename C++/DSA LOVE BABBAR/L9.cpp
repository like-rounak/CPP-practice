//Arrays 

#include<iostream>
using namespace std;

//HOLD
void printArray(int arr[], int size){
    cout << "Printing the array ..." << endl;
    //printimg array loop
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
    //declare
    int arr[15];

    //access
    cout << arr[2] <<endl;

    //Initialise
    int arr2[3]={4,5,11};
    int zero[10]={0}; //all zero

    //access arr2 

    cout << "Element at 2 index = " << arr2[2] << endl;
    
    //printing array
    printArray(zero,10);
    printArray(arr2,3);

    //size 
    //locations - sizeof/int 
    cout<< " No. of Locations in arr[15] : " << sizeof(arr)/sizeof(int) << endl;

    
    return 0;
}