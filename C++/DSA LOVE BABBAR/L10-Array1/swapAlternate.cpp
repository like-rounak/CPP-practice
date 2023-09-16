#include<iostream>
using namespace std;

void swapalternate(int arr[],int size){
    cout<<"Swapping in progress"<<endl;
    for (int i = 0; i < size-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    
}
void printArray(int arr[],int size){
    cout<<"Elements of Array are :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[100];
    int n;//size
    cout<<"Enter Size :"<<endl;    
    cin>>n;
    cout<<"Enter Elements :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    swapalternate(arr,n);
    printArray(arr,n);
       
    return 0;
}