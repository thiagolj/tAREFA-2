#include <iostream>
using namespace std;

int main() {
    int base, altura;
    cout << "Digite a base e a altura do retAngulo:\n";
    cin >> base >> altura;

    int area = base * altura;
    cout << "Area = " << area << endl;

    if (area > 100)
        cout << "Terreno grande" << endl;
    else
        cout << "Terreno pequeno" << endl;

    return 0;
}