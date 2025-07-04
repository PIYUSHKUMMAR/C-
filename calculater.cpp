#include <iostream>
using namespace std;
int main(){
    char num;
    double a,b;
    cout << "enter the operator: ";
    cin >> num;
    cout << "two numbers: ";
    cin >> a >> b;
    switch (num){
        case '+':
        cout << "a+b = " << a+b << endl;
        break;
        case '-':
        cout << "a-b = " << a-b << endl;
        break;
        case '*':
        cout << "a*b = " << a*b << endl;
        break;
        case '/':
        if (b!=0){
        cout << "a/b = " << a/b << endl;
        break;}
        else{
            cout<< "b cannot be zero" << endl;
            break;
        }
        default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}