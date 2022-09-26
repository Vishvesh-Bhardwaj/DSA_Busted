#include<iostream>
using namespace std;

int main (){
    
    int a , b;
    char operation;

    cout << " Enter the value of A -> " << endl;
    cin >> a;

    cout << "Enter the value of B ->" << endl;
    cin >> b;

    cout << "Enter the Arithmetic Operation ( + , - , / , * , % )" << endl;
    cin >> operation;

    switch (operation) {

        case '+' : cout << "A + B :" << a+b << endl;
        break;

        
        case '-' : cout << "A - B :" << a-b << endl;
        break;

        
        case '/' : cout << "A / B :" << a/b << endl;
        break;

        
        case '*' : cout << "A +*B :" << a*b << endl;
        break;

        
        case '%' : cout << "A % B :" << a%b << endl;
        break;

        default :

        cout << "Enter a Valid operation !!!" << endl;

    }

    return 0;
}