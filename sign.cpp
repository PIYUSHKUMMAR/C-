#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the number: ";
    cin >> num;
    if (num>0){
        cout << num << " is Positive"<< endl;
    }
    else if (num<0){
        cout << num << " is Negative"<< endl;
    }
    else{
        cout << num << " is zero"<< endl;
    }
    return 0;
}