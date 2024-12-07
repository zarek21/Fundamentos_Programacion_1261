#include <iostream>
#include <string>

struct Nodo {
    std::string parteDelCuerpo;
    Nodo* siguiente;
};

int main() {
    Nodo cabeza = { "Cabeza", nullptr };
    Nodo torso = { "Torso", nullptr };
    Nodo pies = { "Pies", nullptr };

    cabeza.siguiente = &torso;
    torso.siguiente = &pies;

    Nodo* actual = &cabeza;
    while (actual != nullptr) {
        std::cout << "Parte del cuerpo: " << actual->parteDelCuerpo << std::endl;
        actual = actual->siguiente;
    }

    return 0;
}