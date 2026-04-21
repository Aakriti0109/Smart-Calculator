#include <iostream>
#include <cmath>
using namespace std;

// Function for basic calculator
void basicCalculator() {
    double a, b;
    char op;

    cout << "Enter expression (e.g. 5 + 3): ";
    cin >> a >> op >> b;

    switch(op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': 
            if(b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero\n";
            break;
        default: cout << "Invalid operator\n";
    }
}

// BMI Calculator
void calculateBMI() {
    double weight, height;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (meters): ";
    cin >> height;

    double bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    if(bmi < 18.5)
        cout << "Underweight\n";
    else if(bmi < 25)
        cout << "Normal\n";
    else if(bmi < 30)
        cout << "Overweight\n";
    else
        cout << "Obese\n";
}

// Simple Interest
void simpleInterest() {
    double p, r, t;
    cout << "Enter Principal: ";
    cin >> p;
    cout << "Enter Rate (%): ";
    cin >> r;
    cout << "Enter Time (years): ";
    cin >> t;

    double si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
}

// Unit Conversion
void unitConversion() {
    int choice;
    cout << "\n1. km to m\n2. m to km\n3. Celsius to Fahrenheit\n4. Fahrenheit to Celsius\n";
    cout << "Choose: ";
    cin >> choice;

    double val;

    switch(choice) {
        case 1:
            cout << "Enter km: ";
            cin >> val;
            cout << "Meters: " << val * 1000 << endl;
            break;

        case 2:
            cout << "Enter meters: ";
            cin >> val;
            cout << "Kilometers: " << val / 1000 << endl;
            break;

        case 3:
            cout << "Enter Celsius: ";
            cin >> val;
            cout << "Fahrenheit: " << (val * 9/5) + 32 << endl;
            break;

        case 4:
            cout << "Enter Fahrenheit: ";
            cin >> val;
            cout << "Celsius: " << (val - 32) * 5/9 << endl;
            break;

        default:
            cout << "Invalid choice\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== SMART CALCULATOR =====\n";
        cout << "1. Basic Calculator\n";
        cout << "2. BMI Calculator\n";
        cout << "3. Simple Interest\n";
        cout << "4. Unit Conversion\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch(choice) {
            case 1: basicCalculator(); break;
            case 2: calculateBMI(); break;
            case 3: simpleInterest(); break;
            case 4: unitConversion(); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}