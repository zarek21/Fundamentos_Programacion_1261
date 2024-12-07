#include <iostream>
#include <cstring>

bool checarpalindromo(char* string, int izquierda, int derecha);
bool espalindroma(char* string);

int main() {
    char palabra[50];

    std::cout << "Ingresa una palabra y te dire si es palindroma o no: ";
    std::cin >> palabra;

    if (espalindroma(palabra)) {
        std::cout << "La palabra \"" << palabra << "\" es un palíndromo." << std::endl;
    }
    else {
        std::cout << "La palabra \"" << palabra << "\" no es un palíndromo." << std::endl;
    }

    return 0;
}

bool checarpalindromo(char* string, int izquierda, int derecha) {
    if (izquierda >= derecha) {
        return true;
    }
    else if (string[izquierda] == string[derecha]) {
        return checarpalindromo(string, izquierda + 1, derecha - 1);
    }
    else {
        return false;
    }
}

bool espalindroma(char* string) {
    int length = strlen(string);
    return checarpalindromo(string, 0, length - 1);
}