#include <iostream>
#include <string>
#include <locale>

int main() {
    int peleadores;
    int sistemaCombate;
    setlocale(LC_ALL, "en_US.UTF-8");

    std::cout << "Bienvenido al sistema de combates.\n";
    std::cout << "Ingresa el número de peleadores en la arena: ";
    std::cin >> peleadores;

    if (peleadores <= 1) {
        std::cout << "Debe haber al menos 2 peleadores para realizar batallas.\n";
        return 1;
    }

    std::cout << "Selecciona el sistema de combate:\n";
    std::cout << "1.- Royal Rumble\n";
    std::cout << "2.- Eliminatoria directa\n";
    std::cout << "3.- Grupos, semifinal y final\n";
    std::cin >> sistemaCombate;

    int batallas = 0;

    switch (sistemaCombate) {
    case 1:
        batallas = peleadores - 1;
        std::cout << "Sistema de combate: Royal Rumble\n";
        std::cout << "Número de batallas necesarias: " << batallas << std::endl;
        break;

    case 2:
        batallas = peleadores - 1;
        std::cout << "Sistema de combate: Eliminatoria directa\n";
        std::cout << "Número de batallas necesarias: " << batallas << std::endl;
        break;

    case 3:
        if (peleadores >= 4) {
            int peleadoresPorGrupo = peleadores / 4;
            int batallasGrupos = peleadoresPorGrupo * 6;
            int batallasFinales = peleadoresPorGrupo - 1;
            batallas = batallasGrupos + batallasFinales;

            std::cout << "Sistema de combate: Grupos, semifinal y final\n";
            std::cout << "Número de batallas necesarias: " << batallas << std::endl;
        }
        else {
            std::cout << "No es posible dividir a menos de 4 peleadores en grupos.\n";
        }
        break;

    default:
        std::cout << "Sistema de combate no válido.\n";
    }

    return 0;
}