#include <iostream>
#include <locale>

int n(int numero) {
    if (numero == 0) {
        return 0;
    }
    return numero + n(numero - 1);
}

int main() {
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    int numero;

    std::cout << "Ingresa un número: ";
    std::cin >> numero;
    int resultado = n(numero);
    std::cout << "La suma de los primeros " << numero << " números naturales es: " << resultado << std::endl;

    return 0;
}