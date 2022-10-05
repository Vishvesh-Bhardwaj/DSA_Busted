#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int k=0;k<n;k++){
        cout << arr[k];
    }
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        printArray(arr,n);
    }

int main (){
    
    int n;
    cin>>n;
    int arr [25];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    printArray(arr,n);
    cout << endl;
    reverseArray(arr,n);

    return 0;
}