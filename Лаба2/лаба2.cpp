#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    switch ((a + b) % 2 || (b + c) % 2 || (a + c) % 2){
        case '0':
            cout << "Имеется пара, которая в сумме дает парное число.";
        default:
            cout << "Такой пары не существует";
    }
}