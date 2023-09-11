#include<iostream>
using namespace std;

//Linear Search
bool search(int arr[],int size , int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
}
int main(){
    int arr[10]={3,1,2,64,12,56,11,1,-1,2};

    cout << "Enter the Key";
    int k;
    cin>>k;

    bool found = search(arr,10,k);
    if (found)
    {
        cout<<"KEY FOUND in array";
    }
    else{
        cout<<"KEY ABSENT in array";
    }
    
    return 0;
}