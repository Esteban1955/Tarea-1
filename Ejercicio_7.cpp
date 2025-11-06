#include <iostream>
using namespace std;

int main() {
    double a, b, cambio;

    cout << "Escribe un valor para a: ";
    cin >> a;

    cout << "Escribe un valor para b: ";
    cin >> b;

    cambio = a;
    a = b;
    b = cambio;

    cout << "Ahora a vale: " << a << endl;
    cout << "Ahora b vale: " << b << endl;

    return 0;
}
