#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, y, M;
    cout << "Введите числа X и Y: ";
    cin >> x >> y;

    M = (1.17 * log(sqrt(1 + pow(cos(y), 2))))
               / (exp(y) + pow(sin(x), 2));

    cout << M;
}