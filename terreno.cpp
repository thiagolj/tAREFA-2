#include <iostream>
using namespace std;

int main() {
    float base, altura;
    cout << "Digite a base e a altura do retangulo:\n";
    cin >> base >> altura;

    float area = base * altura;
    cout << "Area = " << area << endl;

    if (area > 100)
        cout << "Terreno grande" << endl;

    return 0;
}