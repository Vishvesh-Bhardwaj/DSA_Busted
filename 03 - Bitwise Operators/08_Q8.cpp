#include<iostream>
using namespace std;

int main (){
    
    int a = 1;
    int b = 1;
    if (a-- >0 || ++b >2)
        cout<<"Inside If"<<endl;
    else 
        cout<<"Inside Else"<<endl;

    cout << a <<" "<<b;


    return 0;
}