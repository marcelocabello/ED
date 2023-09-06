#include <iostream>
using namespace std;

struct F {
    int val;
    int res;
};

void calcFact(int n, F arr[], int i) {
    if (n == 0) {
        arr[i].res = 1;
        arr[i].val = 0;
    } else {
        calcFact(n - 1, arr, i - 1);
        arr[i].val = n;
        arr[i].res = arr[i - 1].res * n;
    }
}

int main() {
    int n;
    cout << "Ingresa un numero para calcular su factorial: ";
    cin >> n;

    F arr[n + 1];
    calcFact(n, arr, n);

    cout << "Valores multiplicados:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i].val << " ";
        if (i < n) {
            cout << "* ";
        }
    }
    cout << "= " << arr[n].res << endl;

    return 0;
}

