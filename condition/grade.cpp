#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter student marks: ";
    cin >> num;
    if (num>=90){
        cout << num << " is A grade"<< endl;
    }
    else if (num>=80 && num<90){
        cout << num << " is B grade"<< endl;
    }
    else if (num>=70 && num<80){
        cout << num << " is C grade"<< endl;
    }
    else{
        cout << num << " is Fail"<< endl;
    }
    return 0;
}