#include <iostream>
using namespace std;
int main(){
    int row, column;
    cout << "enter the value of row: ";
    cin >> row;
    cout << "enter the value of column: ";
    cin >> column;
    for (int i =0; i<column; i++){
        for (int j=0; j<row; j++){
            if (i==0 || i==column-1 || j==0 || j==row-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}