#include<iostream>
using namespace std;

int main (){
    
    int a ;
    cin>>a;
    cout<<endl;
  
    int i = 1;
    for (; ; ){
        if (i<=a){ 
        cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }

    return 0;
}