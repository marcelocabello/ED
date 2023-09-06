#include <iostream>
using namespace std;

int main() {
    int num;
    int *pn_num;

    cout << "Ingrese un número: ";
    cin >> num;

    pn_num = &num;

    if (*pn_num % 2 == 0) {
        cout << "El número " << *pn_num << " se encuentra guardado en la posición " << pn_num << ", y es par." << endl;
    } else {
        cout << "El número " << *pn_num << " se encuentra guardado en la posición " << pn_num << ", y es impar." << endl;
    }

    return 0;
}

