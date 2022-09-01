#include<iostream>
using namespace std;

int main (){
    
    /*bitwise operators :->
    & -> AND -> a.b
    | -> OR -> a+b
    ~ -> NOT -> invert
    ^ -> XOR -> invert a OR b
    */

   int a = 3;
   int b = 5;

   cout<<"a & b :"<< (a&b ) << endl;
   cout<<"a | b :"<< (a|b ) << endl;
   cout<<" ~a :"  << (~a )<< endl;
   cout<<"a ^ b :" << (a^b )<< endl;


    return 0;
}