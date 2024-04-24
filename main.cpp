#include <iostream>

using namespace std;

void displayMenu();
void performOperation(int choice);

int main() {
    char choice;

    do {
        int operationChoice;
        int num1, num2;

        displayMenu();
        cout << "Enter your choice: ";
        cin >> operationChoice;

        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        performOperation(operationChoice);
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
}

void performOperation(int choice) {
    int num1, num2;
    switch (choice) {
        case 1:
            cout << "Addition Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Subtraction Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Multiplication Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0)
                cout << "The second integer is zero, divide by zero" << endl;
            else
                cout << "Division Result: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}
