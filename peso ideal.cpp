#include <iostream>
using namespace std;

int main() {
    float peso, altura, r;
    cout << "Digite o peso  e a altura";
    cin >> peso >> altura;

    r = peso / (altura * altura);

    if (r < 20)
        cout << "Abaixo do peso" << endl;
    else if (r < 25)
        cout << "Peso ideal" << endl;
    else
        cout << "Acima do peso" << endl;

    return 0;
}