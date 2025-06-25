#include <iostream>
#include <string>
using namespace std;

int main() {
    char sexo;
    float peso, altura, r;

    cout << "Digite o sexo (M/F), peso (kg) e altura (m):\n";
    cin >> sexo >> peso >> altura;

    r = peso / (altura * altura);

    if (sexo == 'F' || sexo == 'f') {
        if (r < 19)
            cout << "Abaixo do peso" << endl;
        else if (r < 24)
            cout << "Peso ideal" << endl;
        else
            cout << "Acima do peso" << endl;
    } else if (sexo == 'M' || sexo == 'm') {
        if (r < 20)
            cout << "Abaixo do peso" << endl;
        else if (r < 25)
            cout << "Peso ideal" << endl;
        else
            cout << "Acima do peso" << endl;
    } else {
        cout << "Sexo inválido." << endl;
    }

    return 0;
}