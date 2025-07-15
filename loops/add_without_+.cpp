#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    int temp = a;
    for (int i=0;i<b;i++){
        temp = temp + 1;
    }
    cout << "a+b = " << temp << endl;
    return 0; 
}