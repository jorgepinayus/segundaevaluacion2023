#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int filas, cols;
    cout << "Ingrese el número de filas y columnas separados por un espacio: ";
    cin >> filas >> cols;

    int matriz[filas][cols];

    // Semilla aleatoria basada en el tiempo actual
    srand(time(NULL));

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = rand() % 100; // Generar un número aleatorio entre 0 y 99
        }
    }

    // Imprimir la matriz generada
    cout << "La matriz generada es: " << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

