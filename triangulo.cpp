#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Digite os tres lados do triangulo ";
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a + b > c) {
        if (fabs(c * c - (a * a + b * b)) < 0.0001)
            cout << "Triangulo retangulo" << endl;
        else
            cout << "Triangulo, mas nao e retangulo" << endl;
    } else {
        cout << "Nao forma triangulo" << endl;
    }

    return 0;
}