#include <iostream>
using namespace std;

int main() {
    int num;
    int *pn_num;

    cout << "Ingrese un n�mero: ";
    cin >> num;

    pn_num = &num;

    if (*pn_num % 2 == 0) {
        cout << "El n�mero " << *pn_num << " se encuentra guardado en la posici�n " << pn_num << ", y es par." << endl;
    } else {
        cout << "El n�mero " << *pn_num << " se encuentra guardado en la posici�n " << pn_num << ", y es impar." << endl;
    }

    return 0;
}

