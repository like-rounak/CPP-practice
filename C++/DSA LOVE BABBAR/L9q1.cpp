#include<iostream>
using namespace std;

int getmax(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;//size
    cout<<"Enter Size :";
    cin>>n;

    cout<<endl<<"Enter Elements :"<<endl;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Maximum & Minimum are : "<<getmax(arr,n)<<","<<getmin(arr,n)<<endl;
    return 0;
}