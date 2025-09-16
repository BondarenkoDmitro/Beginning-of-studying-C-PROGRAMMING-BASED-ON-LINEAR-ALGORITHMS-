#include <iostream>

using namespace std;

int main() {
    double userNumber;
    double firstNumber = 1.3;
    double secondNumber = 10.23;
    cout << "Введіть ваше число: ";
    cin >> userNumber;
    if (userNumber > firstNumber && userNumber <= secondNumber) {
        cout << "Ваше число входить до інтервалу";
    }
    else {
        cout << "На жаль, ваше число не входить до інтервалу";
    }
}