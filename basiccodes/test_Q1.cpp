#include <iostream>
using namespace std;
class employee{
    public:
    int employee_id;
    string employee_name;
    double basic_salary;
    int year_of_experience;


    void total_salaryy(){
        double bonus_salary;
        double total_salary;
        int bonus_rate;
        if (year_of_experience < 2){
            bonus_salary =0.05 * basic_salary;
            bonus_rate = 5;
        }
        else if (year_of_experience > 2 && year_of_experience < 5){
            bonus_salary = 0.1 * basic_salary;
            bonus_rate = 10;
        }
        else{
            bonus_salary =  0.15 * basic_salary;
            bonus_rate = 15;
        }
        total_salary = basic_salary + bonus_salary;
        cout <<"ID: "<< employee_id << endl;
        cout <<"Name: " <<  employee_name<< endl;
        cout << "Basic Salary: " << "$"<<basic_salary << endl;
        cout << "Experience: " <<  year_of_experience << endl;
        cout << "Bonus Rate: " << bonus_rate  << "%"<< endl;
        cout << "Bonus Amount: " <<  "$"<< bonus_salary << endl;
        cout << "Total Salary:" << "$"<< total_salary << endl;
    }
};
int main()
{
    employee cat;
    cout << "Enter Employee ID: ";
    cin >> cat.employee_id;
    cout << "Enter Employee Name: ";
    cin >> cat.employee_name;
    cout << "Enter Basic Salary: ";
    cin >> cat.basic_salary;
    cout << "Enter Year of Experience: ";
    cin >> cat.year_of_experience;
    cat.total_salaryy();
    return 0;
}