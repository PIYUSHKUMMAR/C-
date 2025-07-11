#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the number of elements in an array: ";
    cin >> num;
    int array[num];
    for (int i = 0; i < num; i++){
        cout << "enter the element: ";
        cin >> array[i];
    }
    for (int i = 0; i < num; i++){
        int count = 0;
        for (int j = i; j < num; j++){
            if ( array [i] == array[j]){
                count ++;
            }
    }
    if (count != 1){
        cout << array[i] << " ";
    }
    }
    return 0;
}