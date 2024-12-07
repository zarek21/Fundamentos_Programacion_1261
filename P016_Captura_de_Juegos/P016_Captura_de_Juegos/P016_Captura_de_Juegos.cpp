#include <iostream>
#include <string>
#include <locale>

struct juegos
{
    std::string nombre[3];
    std::string autor[3];
    std::string estudio[3];
    int publishingdate[3];
};

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    struct juegos juegosaguardar;

    std::cout << "Introduce el nombre del juego 1: ";
    std::getline(std::cin, juegosaguardar.nombre[0]);
    std::cout << "Introduce el autor del juego 1: ";
    std::getline(std::cin, juegosaguardar.autor[0]);
    std::cout << "Introduce el estudio del juego 1: ";
    std::getline(std::cin, juegosaguardar.estudio[0]);
    std::cout << "Introduce el año de publicación del juego 1: ";
    std::cin >> juegosaguardar.publishingdate[0];
    std::cin.ignore();
    system("cls");

    std::cout << "Introduce el nombre del juego 2: ";
    std::getline(std::cin, juegosaguardar.nombre[1]);
    std::cout << "Introduce el autor del juego 2: ";
    std::getline(std::cin, juegosaguardar.autor[1]);
    std::cout << "Introduce el estudio del juego 2: ";
    std::getline(std::cin, juegosaguardar.estudio[1]);
    std::cout << "Introduce el año de publicación del juego 2: ";
    std::cin >> juegosaguardar.publishingdate[1];
    std::cin.ignore();
    system("cls");

    std::cout << "Introduce el nombre del juego 3: ";
    std::getline(std::cin, juegosaguardar.nombre[2]);
    std::cout << "Introduce el autor del juego 3: ";
    std::getline(std::cin, juegosaguardar.autor[2]);
    std::cout << "Introduce el estudio del juego 3: ";
    std::getline(std::cin, juegosaguardar.estudio[2]);
    std::cout << "Introduce el año de publicación del juego 3: ";
    std::cin >> juegosaguardar.publishingdate[2];
    std::cin.ignore();
    system("cls");

    std::cout << "\nJuegos guardados:" << std::endl;

    std::cout << "\nJuego 1: " << juegosaguardar.nombre[0] << std::endl;
    std::cout << "Autor: " << juegosaguardar.autor[0] << std::endl;
    std::cout << "Estudio: " << juegosaguardar.estudio[0] << std::endl;
    std::cout << "Año de publicación: " << juegosaguardar.publishingdate[0] << std::endl;
    std::cout << "Juego 2: " << juegosaguardar.nombre[1] << std::endl;
    std::cout << "Autor: " << juegosaguardar.autor[1] << std::endl;
    std::cout << "Estudio: " << juegosaguardar.estudio[1] << std::endl;
    std::cout << "Año de publicación: " << juegosaguardar.publishingdate[1] << std::endl;
    std::cout << "Juego 3: " << juegosaguardar.nombre[2] << std::endl;
    std::cout << "Autor: " << juegosaguardar.autor[2] << std::endl;
    std::cout << "Estudio: " << juegosaguardar.estudio[2] << std::endl;
    std::cout << "Año de publicación: " << juegosaguardar.publishingdate[2] << std::endl;

    return 0;
}