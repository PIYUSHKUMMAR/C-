#include <iostream>
using namespace std;
int main(){
    int row, coln;
    cout << "enter the number of rows: ";
    cin >> row;
    cout << "enter the number of column: ";
    cin >> coln;
    int array[row][coln];
    for (int i = 0; i<row;i++){
        for (int j = 0; j<coln;j++){
            cout << "array["<< i<< "][" << j<<"]: ";
            cin >> array[i][j];
        }
    }
    int temp1 = 0;
    for (int i = 0; i<row;i++){
        for (int j = 0; j<coln;j++){
            if (j==i){
                temp1 = temp1 + array[i][j];
            }
        }
    }
    cout << "the sum of first diagonal: " << temp1 << endl;
    int temp2 = 0;
    for (int i = 0; i<row;i++){
        for (int j = 0; j<coln;j++){
            if (i+j == row-1){
                temp2 = temp2 + array[i][j];
            }
        }
    }
    cout << "the sum of second diagonal: " << temp2 << endl;
    return 0;
}