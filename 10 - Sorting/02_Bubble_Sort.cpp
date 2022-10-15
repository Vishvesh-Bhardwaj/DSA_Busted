#include<iostream>
using namespace std;
 
 void bubble_Sort(int arr[], int n){

    for (int i=0; i<n-1; i++){

        bool swapped = false;
        
        for (int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                 swapped = true;
            }

           
        }

        if (swapped == false){
            cout<<"Already Sorted"<<endl;
            break;
        }
    }

    for (int x=0; x<n; x++){
        cout<<arr[x]<<" ";
    }

 }

int main (){
    
    int n;
    cin >> n;

    int arr[20];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubble_Sort(arr,n);

    return 0;
}