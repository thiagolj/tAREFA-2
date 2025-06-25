#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois valores distintos:\n";
    cin >> a >> b;

    if (a = b) {
        if (a > b)
            cout << "O maior valor é: " << a << endl;
        else
            cout << "O maior valor é: " << b << endl;
    } else {
        cout << "Os valores devem ser distintos." << endl;
    }

    return 0;
}