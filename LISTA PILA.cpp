#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void agregarpila(Nodo*& pila,int n);

int main() {
    Nodo* pila = NULL;
    int n1, n2;
    cout << "Inserte un numero: ";
    cin >> n1;
    agregarpila(pila, n1);
    cout << "\nInserte otro numero: ";
    cin >> n2;
    agregarpila(pila, n2);

    getch();
    return 0;
}

void agregarpila(Nodo*& pila, int n) {
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "\nNumero " << n << " en la pila" << endl;
}

