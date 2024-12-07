
#include <iostream>


void binarioadecimal(int numero) {

    if (numero != 0) {
        binarioadecimal(numero / 2);
        std::cout << numero % 2;
    }

}

int main() {

    int numero = 0;

    std::cout << " DECIMAL A BINARIO " << std::endl;

    std::cout << "Introduce un numero: " << std::endl;
    std::cin >> numero;
    std::cout << "El binario del decimal ingresado es : ";
    binarioadecimal(numero);

}