#include <iostream>
using namespace std;

int main(){
    int row,column;
    cout << "enter the value of row: ";
    cin >> row;
    cout << "enter the value of column: ";
    cin >> column;
    int array[row][column];
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            cin >> array[i][j];
        }
    }
    int sum = 0;
    for (int i=0;i<row;i++){
        for (int j=0;j<column;j++){
            sum = sum + array[i][j] ;

        }
    }
    cout<< "the sum of all the element are: " << sum << endl;
    return 0;
}