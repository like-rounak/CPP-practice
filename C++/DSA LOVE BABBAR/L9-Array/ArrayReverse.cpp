#include<iostream>
using namespace std;

void reversearr(int arr[],int size){
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        swap(arr[i],arr[size-1-i]);
    }
}

int main(){
    int s;
    cout<<"Enter Size of Array :";
    cin>>s;

    int arr[100];
    cout<<"Enter elements of array :";
    for (int i = 0; i < s; i++)
    {
        cin>>arr[i];
    }
    
    reversearr(arr,s);
    cout<<"Elements of Array are :"<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}