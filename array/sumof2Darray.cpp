#include <iostream>
using namespace std;
int main(){
    int row,coln;
    cout<<"enter number of rows: ";
    cin>>row;
    cout<<"enter number of columns: ";
    cin>>coln;
    int arr1[row][coln], arr2[row][coln], sum[row][coln];
    for (int i=0;i<row;i++){
        for (int j=0; j<coln;j++){
            cout << "enter the value of arr1["<<i<<"]["<<j<<"]: ";
            cin >> arr1[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0; j<coln;j++){
            cout << "enter the value of arr2["<<i<<"]["<<j<<"]: ";
            cin >> arr2[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0; j<coln;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "sum of the matrix: "<<endl;
    for (int i=0;i<row;i++){
        for (int j=0; j<coln;j++){
            cout << sum[i][j];
        }
        cout << endl;
    }
    return 0;
}