#include <iostream>


int MCD(int a, int b) {
    if (a == 0) {
        return b;
    }
    return MCD(b % a, a);
}

int main() {
    int a, b;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> a;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> b;

    int resultado = MCD(a, b);
    std::cout << "El maximo comun divisor es: " << resultado << std::endl;

    return 0;
}