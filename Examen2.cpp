#include <iostream>
using namespace std;

int main() {
    int vec_base[3];
    int vec_exp[3];
    int vec_res[3];

    cout << "Dame los valores del vector base" << endl;
    for (int i = 0; i < 3;) {
        cin >> *(vec_base + i);

        if (*(vec_base + i) >= 1 && *(vec_base + i) <= 10) {
            i++;
        } else {
        	
            cout << "El valor debe estar dentro del rango de 1 a 10. Inténtalo de nuevo." << endl;
        }
    }

    cout << "Dame los valores del vector exp" << endl;
    for (int i = 0; i < 3;) {
        cin >> *(vec_exp + i);

        if (*(vec_exp + i) >= 1 && *(vec_exp + i) <= 5) {
            i++;
        } else {
            cout << "El valor debe estar dentro del rango de 1 a 5. Inténtalo de nuevo." << endl;
        }
    }

    for (int i = 0; i < 3; i++) {
        int *result = vec_res + i;
        *result = 1;
        int *base_ptr = vec_base + i;
        int *exp_ptr = vec_exp + i;

        for (int j = 0; j < *exp_ptr; j++) {
            *result *= *base_ptr;
        }
    }

    cout << "El resultado de elevar los elementos del vector base a los elementos del vector exp es:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << *(vec_res + i) << " ";
    }
    cout << endl;

    return 0;
}


