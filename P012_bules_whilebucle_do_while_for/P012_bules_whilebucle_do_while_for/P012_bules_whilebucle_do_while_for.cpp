#include <iostream>
#include <locale>
#include <string>
#include <chrono>
int main()
{
    //Vamos a crear un juego de vidas infinitas
    //int vidas = 3;
    std::string jugar;
    std::cout << "Bienvenido al juego de la eternidad, listo para jugar tus 3 vidas y repetir, ingresa si o ingresa no? " << std::endl;
    std::cin >> jugar;


    while (jugar == "si" || jugar == "SI")
    {
        for (int vidas = 3; vidas >= 0; vidas--)
        {
            std::cout << "tus vidas son: " << vidas << std::endl;
        }
        std::cout << "Te has quedado sin vidas, volveras a vivir para volver a morir" << std::endl;
        std::cout << "¿Deseas volver a jugar ingresa si o ingresa no? ";
        std::cin >> jugar;
    }
    std::cout << "Ok, no volverás a jugar. Un contador del 0 al 100 empezará y terminará tu juego." << std::endl;

    for (int contador = 0; contador <= 100; contador++)
    {
        std::cout << "Contador: " << contador << std::endl;
        _Thrd_sleep_for(100);
    }
}