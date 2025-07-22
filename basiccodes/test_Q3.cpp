#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num ;
    bool is_even = (num%2==0);
    bool is_div_by_3_5 = (num%3==0 && num%5==0);
    bool is_single_digit = (num<=9) && num >= -9;
    cout << "Even: " << (is_even ? "Yes":"No") << endl;
    if (num>0){
        cout << "Positive: Yes" << endl;
    }
    else if (num == 0){
        cout << "Zero: Yes << endl";
    }
    else {
        cout << "Negative: Yes << endl";
    }
    cout << "Divisible by both 3 and 5: " << (is_div_by_3_5 ? "Yes": "No") << endl;
    cout << "Single Digit: " << (is_single_digit? "Yes": "No");
}