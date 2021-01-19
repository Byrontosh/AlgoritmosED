#include <iostream>
using namespace std;

void agregar (int a[], int n);
void imprimir (int a[], int n);
void menor (int a[], int n);

int main() {
    int n;
    cout << "Ingrese el tamaño: ";
    cin >> n;
    int a[n];
    agregar(a, n);
    imprimir(a, n);
    menor(a, n);
    return 0;
}

void agregar (int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void imprimir (int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout <<"|"<<a[i]<<"|";
    }
}
void menor (int a[], int n) {
    int i, b;
    b = a[0];
    for (i = 1; i < n; i++) {
        if (b > a[i]) {
            b = a[i];
        }
    }
    cout << "\nmenor elemento es: " << b;
}
