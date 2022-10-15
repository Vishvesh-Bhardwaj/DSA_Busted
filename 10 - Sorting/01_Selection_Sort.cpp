#include<iostream>
using namespace std;

void selection_Sort(int arr[], int n){

    for (int i = 0; i<n-1; i++){
        int minIndex = i;
        for (int j = i+1; j<n; j++ ){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap (arr[minIndex],arr[i]);

    }
    cout<<"Sorted Array is : "<< " ";
    for(int x = 0; x<n ; x++){
        cout<<arr[x]<<" ";
    }
}

int main (){
    
    int n;
    cin >> n;

    int arr[20];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

   selection_Sort(arr,n);

    return 0;
}