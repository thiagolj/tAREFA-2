#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois valores:\n";
    cin >> a >> b;

    if (a > b)
        cout << "O maior valor �: " << a << endl;
    else if (b > a)
        cout << "O maior valor �: " << b << endl;
    else
        cout << "Os numeros sao identicos." << endl;

    return 0;
}