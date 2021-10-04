#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int h, r;
    cin >> h >> r;
    float x = 1.0/3*acos(-1.0)*pow(r, 2)*h, y = acos(-1.0)*pow(r, 2)*h;
    cout << "Объем конуса равен: " << x << "\n";
    cout << "Объем цилиндра равен: " << y;
    return 0;
}