#include <iostream>
#include "BMI.h"
using namespace std;



int main() {

    double weight;
    double height;
    int age;
    string  name;

    cout << "Write your name:\n";
    cin >> name;

    cout << "Enter your age:\n";
    cin >> age;

    cout << "Enter your weight (kg):\n";
    cin >> weight;

    cout << "Enter your height (m, separated by dot):\n";
    cin >> height;


    cout << "\nData of the examined person:";
    cout << "\nName:" << name;
    cout << "\nAge:" << age;
    cout << "\nYour BMI equals:" << CalculateBMI(weight, height);
    cout << "\nYour category of BMI:";
    CalculateBMICategory(CalculateBMI(weight, height));
    return 0;
}
