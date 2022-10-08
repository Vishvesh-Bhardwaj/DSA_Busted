//First and Last Position of an Element In Sorted Array

#include<iostream>
using namespace std;

int firstPosition(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }

        else if (key>arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;

    }
    return ans;
}

int lastPosition(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start=mid+1;
        }

        else if (key>arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;

    }
    return ans;
}


int main (){
    int n;
    cin >> n;

    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int left = firstPosition(arr,n,key);
    int right = lastPosition(arr,n,key);

    cout<<"First Index : "<< left <<" "<<"Last Index : "<< right << endl;

    return 0;
}