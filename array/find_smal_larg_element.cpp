#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int array[n];
    for (int i = 0; i<n ; i++ ){
        cout << "enter the value: ";
        cin>> array[i];
    }int temp = array[0];
    for (int i = 0; i<n ; i++ ){
        if (temp<array[i]){
            temp = array[i];
        }
    }
    cout<< "the largest no. is: "<< temp << endl;
    temp = array[0];
    for (int i = 0; i<n ; i++ ){
        if (temp>array[i]){
            temp = array[i];
        }
    }
    cout<< "the smallest no. is: "<< temp << endl;
    return 0;
}