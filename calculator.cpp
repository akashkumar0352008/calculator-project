#include <iostream>
using namespace std;

class Calculator {
public:
    float a, b;

    void getInput() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Cannot divide by zero!" << endl;
    }
};

int main() {
    Calculator c;
    int choice;

    c.getInput();

    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: c.add(); break;
        case 2: c.subtract(); break;
        case 3: c.multiply(); break;
        case 4: c.divide(); break;
        default: cout << "Invalid choice";
    }

    return 0;
}
