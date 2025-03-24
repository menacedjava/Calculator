#include <iostream>

using namespace std;


void calculator() {
    double num1, num2;
    char operation;

    cout << " Sonlarni va amallarni kiriting (masalan: 5 + 3): ";
    cin >> num1 >> operation >> num2;

    switch (operation) {
        case '+':
            cout << "Natija: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Natija: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Natija: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Natija: " << num1 / num2 << endl;
            else
                cout << " Nolga bo‘lish mumkin emas!\n";
            break;
        default:
            cout << "⚠ Noto‘g‘ri amal!\n";
    }
}

// Asosiy menyu
int main() {
    char choice;

    do {
        calculator();
        cout << "Yana hisoblashni xohlaysizmi? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << " Dastur tugatildi!\n";
    return 0;
}
