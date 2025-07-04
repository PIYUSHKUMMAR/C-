#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the year: ";
    cin >> num;
    if (num%4==0 && num%100!=0){
        cout << num << " is leap year"<< endl;
    }
    else if (num%100==0 && num%400==0){
        cout << num << " is leap year"<< endl;
    }
    else{
        cout << num << " is not a leap year"<< endl;
    }
    return 0;
}