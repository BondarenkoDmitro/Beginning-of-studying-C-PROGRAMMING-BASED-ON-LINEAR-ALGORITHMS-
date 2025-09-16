#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double circum;
    double pi = 3.14159;
    cout << "Введіть довжину кола: ";
    cin >> circum;
    double R = circum / (2 * pi);
    double S = pi * R * R;
    cout << "Площа круга: " << fixed << setprecision(2) << S << endl;
}