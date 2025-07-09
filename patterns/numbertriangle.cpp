#include <iostream>
using namespace std;
int main(){
    int row, column;
    cout << "enter the value of row: ";
    cin >> row;
    cout << "enter the value of column: ";
    cin >> column;
    for (int i =0; i<column; i++){
        int temp = 1;
        for (int j=0; j<=i; j++){
           cout << temp;
           cout << " ";
           temp++;
        }
        cout << endl;
    }
    return 0;
}