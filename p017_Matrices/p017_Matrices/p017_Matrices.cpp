#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

int main() {
    std::locale::global(std::locale("es_MX.UTF-8"));
    int matriz1[3][3];
    int matriz2[5][5];
    int matriz3[10][10];

    srand(static_cast<unsigned>(time(0)));

    std::cout << "Matriz 3x3:\n";
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            matriz1[x][y] = rand() % 11;
            std::cout << matriz1[x][y] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nMatriz 5x5:\n";
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            matriz2[x][y] = rand() % 11;
            std::cout << matriz2[x][y] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nMatriz 10x10:\n";
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            matriz3[x][y] = rand() % 11;
            std::cout << matriz3[x][y] << " ";
        }
        std::cout << "\n";
    }

    int opcion, fila, columna;
    std::cout << "\nSeleccione la matriz que desea consultar:\n";
    std::cout << "1. Matriz 3x3\n";
    std::cout << "2. Matriz 5x5\n";
    std::cout << "3. Matriz 10x10\n";
    std::cin >> opcion;

    std::cout << "Ingrese la posición (fila y columna): ";
    std::cin >> fila >> columna;

    if (opcion == 1 && fila >= 0 && fila < 3 && columna >= 0 && columna < 3) {
        std::cout << "Valor en matriz 3x3 en posición (" << fila << ", " << columna << "): " << matriz1[fila][columna] << std::endl;
    }
    else if (opcion == 2 && fila >= 0 && fila < 5 && columna >= 0 && columna < 5) {
        std::cout << "Valor en matriz 5x5 en posición (" << fila << ", " << columna << "): " << matriz2[fila][columna] << std::endl;
    }
    else if (opcion == 3 && fila >= 0 && fila < 10 && columna >= 0 && columna < 10) {
        std::cout << "Valor en matriz 10x10 en posició (" << fila << ", " << columna << "): " << matriz3[fila][columna] << std::endl;
    }
    else {
        std::cout << "Posición no valida" << std::endl;
    }

    return 0;
}