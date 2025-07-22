#include <iostream>
using namespace std;
int main()
{
    float temperature;
    char unit;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter Unit (C/F/K): ";
    cin >> unit;
    float F;
    float K;
    float C;
    switch(unit){
        case 'C':
        K = temperature + 273.15;
        F = (temperature * 9/5) + 32;
        cout << "Original: "<< temperature << "C"<< endl;
        cout << "Fahrenheit: "<< F << "F"<< endl;
        cout << "Kelvin: "<< K << "K"<< endl;
        case 'K':
        C = temperature - 273.15;
        F = (C * 9/5) + 32;
        cout << "Original: "<< temperature << "K"<< endl;
        cout << "Fahrenheit: "<< F << "F"<< endl;
        cout << "Celsius: "<< C << "C"<< endl;
        case 'F':
        C = (F - 32) * 5/9;
        K = C + 273.15;
        cout << "Original: "<< temperature << "F"<< endl;
        cout << "Kelvin: "<< K << "K"<< endl;
        cout << "Celsius: "<< C << "C"<< endl;
    }
    return 0;
}