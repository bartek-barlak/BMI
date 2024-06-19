#include "BMI.h"
#include <iostream>
using namespace std;


double CalculateBMI(double weight, double height) {

    return (weight / (height * height));
}

void CalculateBMICategory(double CalculateBMI) {
    if (CalculateBMI < 18.5) {
        cout << "underweight";
    } else if (CalculateBMI >= 18.5 && CalculateBMI < 25.0) {
        cout << "normal weight";
    } else if (CalculateBMI > 25.0) {
        cout << "overweight";
    }

}