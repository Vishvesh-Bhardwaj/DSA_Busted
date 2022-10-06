#include <iostream>
using namespace std;

int Linearsearch(int arr[], int n, int key) {

  for (int i = 0; i < n; i++){ 
    if (arr[i] == key)
      return i;
  }

  return -1;
}

int main() {
  
  int n;
  cin >> n;
  int arr[20];
  for (int i = 0; i<n ; i++){
    cin >> arr[i];
  }
  int key;
  cin >> key;

  int result = Linearsearch(arr, n, key);

  if (result == -1) {

    cout << "Element not found" << endl;
    }
    
    else { 
     cout << "Element found at index: " << result << endl;
}

return 0;
}