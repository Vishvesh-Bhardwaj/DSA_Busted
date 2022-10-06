#include<iostream>
using namespace std;

    int Binary_Search(int arr[], int n, int key){

        int start = 0;
        int end = n-1;
        int mid;
        mid = start + (end - start)/2;

        while(start <= end){
           
            if (arr[mid] == key){
                return mid;
            }

            if (key > arr[mid]){
                start = mid + 1;
            }

            else {
                end = mid - 1;
            }

            mid = start + (end  -  start)/2 ;
        }

        return -1;

    }

int main (){
    
    int n;
    int arr[20];
    cin>>n;
    for ( int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int result = Binary_Search(arr,n,key);

    if (result == -1){
        cout << "Element Not Present !" << endl;
    }

    else {
        cout << "Element Present at INDEX : " << result << endl;
    }
    
    return 0;
}