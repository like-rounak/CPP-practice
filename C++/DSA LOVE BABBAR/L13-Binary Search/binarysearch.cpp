#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key ){

    int start =0;
    int end = size-1;

    int mid = (start + end )/2;

    while (start <= end ){
        if (arr[mid]==key) {
            cout << "Key found at index " << mid << endl;
            return mid;
        }
        if (key > arr[mid]){
            start=mid+1;
        }
        if (key < arr[mid]){
            end=mid-1;
        }

        mid = (start + end )/2;

    }
    cout << "Key not found" << endl;
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int index = binarysearch(even,6,10);
    int index1 = binarysearch(odd,5,3);

    cout<<index<<endl;
    cout<<index1<<endl;
}