#include <iostream>
using namespace std;

struct E {
    int base;
    int exponente;
    int resultado;
};

void calcExp(int base, int exponente, E arr[], int i) {
    if (exponente == 0) {
        arr[i].resultado = 1;
        arr[i].base = base;
        arr[i].exponente = 0;
    } else {
        calcExp(base, exponente - 1, arr, i - 1);
        arr[i].base = base;
        arr[i].exponente = exponente;
        arr[i].resultado = arr[i - 1].resultado * base;
    }
}

int main() {
    int base, exponente;
    cout << "Ingresa una base: ";
    cin >> base;
    cout << "Ingresa un exponente: ";
    cin >> exponente;

    E arr[exponente + 1];
    calcExp(base, exponente, arr, exponente);

    cout << "Veces multiplicado:" << endl;
    for (int i = 1; i <= exponente; i++) {
        cout << base;
        if (i < exponente) {
            cout << " * ";
        }
    }
    cout << " = " << arr[exponente].resultado << endl;

    return 0;
}
