#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Digite os tres lados do triangulo:\n";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            cout << "Triangulo equilatero" << endl;
        else if (a == b || a == c || b == c)
            cout << "Triangulo isósceles" << endl;
        else
            cout << "Triangulo escaleno" << endl;
    } else {
        cout << "Nao forma triangulo" << endl;
    }

    return 0;
}