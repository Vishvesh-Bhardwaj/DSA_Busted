#include<iostream>
using namespace std;

void Swap_Alternate(int arr[], int n){

    for(int i = 0; i<n ; i = i+2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void PrintArray(int arr[], int n){
    for (int j=0; j<n; j++){
        cout<< arr[j] << " ";
    }
}

int main (){
    
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    Swap_Alternate(arr,n);
    PrintArray(arr,n);

    return 0;
}