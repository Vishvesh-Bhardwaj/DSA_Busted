#include<iostream>
using namespace std;

long long int binarySearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = 0;
    while(s<=e){
        if((mid*mid)==n){
            return mid;
        }
        if((mid*mid)<n){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecison(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i<precision; i++){
        factor = factor / 10;
        for (double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}
int main (){
    int n;
    cin >> n;
    cout<<endl;
    long long int tempSol = binarySearch(n);
    double result = morePrecison(n,2,tempSol);
    cout<<"Square root of "<<n<<" is : "<<result<<endl;
    
    return 0;
}