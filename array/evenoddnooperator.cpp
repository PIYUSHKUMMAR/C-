#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the number of elements in an array: ";
    cin >> num;
    int* array = new int [num];
    for (int i = 0; i < num; i++){
        cout << "enter the element: ";
        cin >> array[i];
    }
    for (int i = 0; i< num; i++){
        if (array[i] & 1){
            cout << array[i] << "is odd" << endl;
        }
        else {
            cout << array[i] << "is even" << endl;
        }
    }
    return 0;
}