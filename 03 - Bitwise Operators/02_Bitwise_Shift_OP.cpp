#include<iostream>
using namespace std;

int main (){
    
    /*bitwise shift operators :->
    
    << -> Left Shift 
    (Multiply by 2 for small no.)
    
    >> -> Right Shift
    (Divide by 2 for small no.)

    For +ve no. , Padding is done by '0'

    For -ve no. , It depends upon Compiler.

    */

   int a = 3;
   int b = 1;

   cout<<"Left Shift : "<< (a<<b) <<endl;
   cout<<"Right Shift : "<< (a>>b) <<endl;


    return 0;
}