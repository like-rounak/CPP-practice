#include <iostream>
#include <cstdio>
using namespace std;

/*
`int min_oF_50 FROM AN ARRAY ` here.
*/

int main() {
    int arr[50];
    int min = 0;
    for (int i = 0; i < 50; i++) {
        cin >> arr[i];
    }
    min = arr[0];
    for (int i = 0; i < 50; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}