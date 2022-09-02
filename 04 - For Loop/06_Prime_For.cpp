#include<iostream>
using namespace std;

int main (){
    
    int n;
    cin>>n;

    bool isprime = true;

    for(int i = 2 ; i < n ; i++){
        if(n%i==0){
             isprime = false;
            break;
           
        }
    } 

    if (isprime == true){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }


    return 0;
}