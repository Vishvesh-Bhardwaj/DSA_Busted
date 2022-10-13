#include<iostream>
using namespace std;

int FindPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + ((e-s)/2);
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e = mid;
        }
        
        mid = s + ((e-s)/2);
    }
    return s;
}
int main (){
    int n;
    cin>>n;
    int arr[24];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    int result = FindPivot(arr,n);
    cout << "Pivot Element is : " << arr[result] << endl;


    return 0;
}