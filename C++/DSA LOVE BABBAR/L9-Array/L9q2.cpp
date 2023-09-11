#include<iostream>
using namespace std;

int getsum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;//size
    cout<<"Enter size :";
    cin>>n;
    cout<<"Enter Elements :"<<endl;
    int arr[100];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of array : "<<endl<<getsum(arr,n)<<endl;
    return 0;
}