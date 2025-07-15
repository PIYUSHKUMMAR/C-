#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the number of elements in an array: ";
    cin >> num;
    int array[num],dup[num];
    for (int i = 0; i < num; i++){
        cout << "enter the element: ";
        cin >> array[i];
    }
    int cat = 0;
    for (int i = 0; i < num; i++){
        int count = 0;
        for (int j = 0; j < num; j++){
            if ( array [i] == array[j]){
                count ++;
            }
    }
    if (count == 1){

        dup[cat] = array[i];
        cat++;
    }
    }

    for (int i = 0; i < cat; i++){
        cout <<dup[i];
    }
    return 0;
}