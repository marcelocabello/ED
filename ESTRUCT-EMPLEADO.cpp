#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct empleado {
    string nombre;
    int salario;
    string empresa;
};

int main() {
    int n;
    cout << "¿Cuantos empleados son?: ";
    cin >> n;

    empleado* datos = new empleado[n];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, datos[i].nombre);

        cout << "Salario: ";
        cin >> datos[i].salario;

        cin.ignore();
        cout << "Empresa: ";
        getline(cin, datos[i].empresa);
    }

    for (int i = 0; i < n; i++) {
        cout << "\nNombre: " << datos[i].nombre << endl;
        cout << "Salario: " << datos[i].salario << endl;
        cout << "Empresa: " << datos[i].empresa << endl;
    }

    delete[] datos;
    system("pause");
    return 0;
}

