#include<iostream>
using namespace std;

int MaxValue (int arr[] , int n){
    
    int max = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }           
    }
    return max;
}

int MinValue (int arr[], int n){

    int min = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main (){
    
    int n;
    cin >> n;
    int arr[100];

    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << "Maximum Value is : " << MaxValue(arr,n) << endl;
    cout << "Minimum Value is : " << MinValue(arr,n) << endl;
    return 0;
}   