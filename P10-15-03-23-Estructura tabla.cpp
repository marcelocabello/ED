#include <iostream>
using namespace std;

struct E {
    int multiplicando;
    int multiplicador;
    int resultado;
};

void calculos(int multiplicando, int multiplicador, E arr[], int i) {//funcion para los calculos
    if (multiplicador == 0) {//aqui se hace uso de la funcion recursiva si es igual a 0 el resultado es 0
        arr[i].resultado = 0;
        arr[i].multiplicando = multiplicando;
        arr[i].multiplicador = 0;
    } else {//aquí se decrementa el multiplicador para hacer uso de la recursividad 
        calculos(multiplicando, multiplicador - 1, arr, i - 1);
        arr[i].multiplicando = multiplicando;
        arr[i].multiplicador = multiplicador;
        arr[i].resultado = arr[i - 1].resultado + multiplicando;
    }
}

void mostrartabla(int multiplicador, E arr[], int i) {//funcion para mostrar los resultados
    if (i <= multiplicador) {//Si el valor de i es menor o igual al multiplicador, se imprime la multiplicación
        cout << arr[i].multiplicando << " x" << arr[i].multiplicador << " = " << arr[i].resultado << endl;//con ayuda del arreglo podremos avanzar y momstrar los datos guardados
        mostrartabla(multiplicador, arr, i + 1);
    }
}

int main() {//pedir datos al usuario
    int multiplicando, multiplicador;
    cout << "Ingresa un multiplicando: ";
    cin >> multiplicando;
    cout << "Ingresa un multiplicador: ";
    cin >> multiplicador;

    E arr[multiplicador + 1];
    calculos(multiplicando, multiplicador, arr, multiplicador);//llamar  ala funcion calculo

    cout << "Tabla de multiplicar:" << endl;
   mostrartabla(multiplicador, arr, 0);

    return 0;
}

