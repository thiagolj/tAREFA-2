#include <iostream>
using namespace std;

int main() {
    float p1, p2;
    cout << "Digite a nota P1 ";
    cin >> p1;

    p2 = (15 - p1) / 2;

    cout << "Para ser aprovado, precisa tirar " << p2 << " na P2." << endl;

    return 0;
}