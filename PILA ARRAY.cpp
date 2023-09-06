#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100; // Tamaño máximo del array de la pila

struct Pila {
    int elementos[MAX_SIZE];
    int top;
};

void inicializarPila(Pila&);
void agregarPila(Pila&, int);

int main() {
    Pila pila;
    inicializarPila(pila);

    int n1, n2;
    cout << "Inserte un numero: ";
    cin >> n1;
    agregarPila(pila, n1);
    cout << "\nInserte otro numero: ";
    cin >> n2;
    agregarPila(pila, n2);

    getch();
    return 0;
}

void inicializarPila(Pila& pila) {
    pila.top = -1;
}

void agregarPila(Pila& pila, int n) {
    if (pila.top == MAX_SIZE - 1) {
        cout << "La pila está llena. No se puede agregar el elemento." << endl;
        return;
    }

    pila.top++;
    pila.elementos[pila.top] = n;
    cout << "\nNumero " << n << " en la pila" << endl;
}

