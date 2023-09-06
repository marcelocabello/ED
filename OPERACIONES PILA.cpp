#include <iostream>
#define MAX_SIZE 100
using namespace std;
struct Stack {
    int data[MAX_SIZE];
    int top;
};

void initialize(Stack *stack) {
    stack->top = -1;
}

void push(Stack *stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        cout << "La pila está llena. No se puede agregar el elemento." << endl;
        return;
    }
    stack->data[++stack->top] = item;
}

int pop(Stack *stack) {
    if (stack->top == -1) {
        cout << "La pila está vacía. No se puede extraer ningún elemento." << endl;
        return -1; // Valor de retorno para indicar un error
    }
    return stack->data[stack->top--];
}

int peek(Stack *stack) {
    if (stack->top == -1) {
        cout << "La pila está vacía." << endl;
        return -1; // Valor de retorno para indicar un error
    }
    return stack->data[stack->top];
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int main() {
    Stack miPila;
    initialize(&miPila);

    push(&miPila, 5);
    push(&miPila, 10);
    push(&miPila, 15);

    cout << "Elemento superior de la pila: " << peek(&miPila) << endl;

    while (!isEmpty(&miPila)) {
        cout << "Elemento extraido de la pila: " << pop(&miPila) << endl;
    }

    return 0;
}

