
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <vector>
#include <random>
#include <locale>

int curacion() {
    int curacion1 = 20;
    int curacion2 = 30;
    int curacion3 = 50;
    int curaciones[] = { curacion1, curacion2, curacion3 };
    int indiceAleatorio = rand() % 3;
    int curacionAleatoria = curaciones[indiceAleatorio];
    return curacionAleatoria;
}

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    srand(time(0));
    int pokemon;
    int ataqueseleccionadopikachu;
    int ataqueseleccionadocharizard;
    int ataquep1 = 15;
    int ataquep2 = 25;
    int ataquep3 = 40;
    int ataquec1 = 10;
    int ataquec2 = 30;
    int ataquec3 = 35;
    int vidacharizard = 250;
    int vidapikachu = 250;
    int tipodepokemon = 0;


    std::vector<int> values = { ataquec1, ataquec2, ataquec3 };
    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> distrib(0, values.size() - 1);
    int randomIndex = distrib(gen);
    int randomValue = values[randomIndex];


    std::cout << "Bienvenido a la batalla pokemon" << std::endl;
    std::cout << "\nElige a tu pokemon para la batalla: " << std::endl;
    std::cout << "1.Pikachu\n2.Charizard" << std::endl;
    std::cin >> pokemon;
    if (pokemon == 1)
    {
        system("color 1f");
        tipodepokemon = 1;
        std::cout << "\nPikachu ha sido seleccionado para la batalla" << std::endl;
    }
    else if (pokemon == 2)
    {
        system("color 4f");
        tipodepokemon = 2;
        std::cout << "\nCharizard ha sido seleccionado para la batalla" << std::endl;
    }
    else
    {
        system("color 04");
        std::cout << "Seleccion No Valida, Selecciona de Nuevo: " << std::endl;
        std::cout << "1.Pikachu\n2.Charizard" << std::endl;
        std::cin >> pokemon;
    }
    std::cout << "\nPresiona Enter Para Continuar\n" << std::endl;
    std::system("pause");
    std::system("cls");
    std::system("color 07");

    std::cout << "Selecciona tu Movimiento" << std::endl;

    while (vidacharizard > 0 && vidapikachu > 0 && tipodepokemon == 1) {

        std::system("pause");
        std::system("cls");
        std::system("color 1f");
        Sleep(500);
        std::system("color 07");
        int randomIndex = distrib(gen);
        int randomValue = values[randomIndex];
        std::cout << "\n1.Ataque Relampago (15 hp)\n2.Ataque Trueno (25 hp)\n3.Ataque Voltio Cruel (40 hp) (-15 hp)\n4.Curacion aleatoria (20,30 o 50): " << std::endl;
        std::cin >> ataqueseleccionadopikachu;

        if (ataqueseleccionadopikachu == 1)
        {
            vidacharizard -= ataquep1;
            vidapikachu -= randomValue;
            std::system("pause");
            std::system("cls");
            std::cout << "\nHas atacado con ataque relampago infligiendole 15 de daño a charizard" << std::endl;
            std::cout << "Charizard ataca devuelta con " << randomValue << std::endl;
            std::cout << "Vida de Charizard: " << vidacharizard << std::endl;
            std::cout << "Vida de tu pokemon: " << vidapikachu << std::endl;

        }
        else if (ataqueseleccionadopikachu == 2)
        {
            vidacharizard -= ataquep2;
            vidapikachu -= randomValue;
            std::system("pause");
            std::system("cls");
            std::cout << "\nHas atacado con ataque trueno infligiendole 25 de daño a charizard" << std::endl;
            std::cout << "Charizard ataca devuelta con " << randomValue << std::endl;
            std::cout << "Vida de Charizard: " << vidacharizard << std::endl;
            std::cout << "Vida de tu pokemon: " << vidapikachu << std::endl;
        }
        else if (ataqueseleccionadopikachu == 3)
        {
            vidacharizard -= ataquep3;
            vidapikachu -= randomValue;
            vidapikachu -= 15;
            std::system("pause");
            std::system("cls");
            std::cout << "\nHas atacado con ataque trueno infligiendole 40 de daño a charizard y perdiendo 15 de vida tuya" << std::endl;
            std::cout << "Charizard ataca devuelta con " << randomValue << std::endl;
            std::cout << "Vida de Charizard: " << vidacharizard << std::endl;
            std::cout << "Vida de tu pokemon: " << vidapikachu << std::endl;
        }
        else if (ataqueseleccionadopikachu == 4) {
            system("color 2f");
            int puntosCuracion = curacion();
            std::system("pause");
            std::system("cls");
            std::cout << "Has elegido curarte añadiendo " << puntosCuracion << " puntos de vida" << std::endl;
            std::cout << "Vida de tu pokemon: " << vidapikachu << std::endl;
            vidapikachu += puntosCuracion;

            int accionCharizard = rand() % 2;

            if (accionCharizard == 0) {
                std::cout << "Charizard ataca!" << std::endl;
                vidapikachu -= randomValue; // 
                std::cout << "Pikachu recibe " << randomValue << " puntos de daño." << std::endl;
            }
            else {
                int puntosCuracionCharizard = 20;
                vidacharizard += puntosCuracionCharizard;
                std::cout << "Charizard se ha curado añadiendo " << puntosCuracionCharizard << " puntos de vida." << std::endl;
            }
            std::cout << "Vida de Charizard: " << vidacharizard << std::endl;
        }
        else
        {
            std::cout << "Seleccion no reconocida, porfavor ingresa un ataque valido" << std::endl;
            std::cout << "1.Ataque Relampago (15 hp)\n2.Ataque Trueno (25 hp)\n3.Ataque Voltio Cruel (40 hp) (-15 hp)" << std::endl;
            std::cin >> ataqueseleccionadopikachu;
        }
    }
    while (vidacharizard > 0 && vidapikachu > 0 && tipodepokemon == 2) {
        int randomIndex = distrib(gen);
        int randomValue = values[randomIndex];

        std::cout << "\n1.Ataque Ala (10 hp)\n2.Ataque Llamarada (30 hp)\n3.Ataque Lanzallamas (35 hp) (-25 hp)\n4.Curacion aleatoria (20,30 o 50)" << std::endl;
        std::cin >> ataqueseleccionadocharizard;
        std::system("pause");
        std::system("cls");
        std::system("color 4f");
        Sleep(500);
        std::system("color 07");

        if (ataqueseleccionadocharizard == 1)
        {
            std::system("pause");
            std::system("cls");
            std::cout << "\nHas atacado con ataque ala infligiendole 10 de daño a pikachu" << std::endl;
            vidapikachu -= ataquec1;
            vidacharizard -= randomValue;
            std::cout << "Pikachu ataca devuelta con " << randomValue << std::endl;
            std::cout << "Vida de Pikachu: " << vidapikachu << std::endl;
            std::cout << "Vida de tu pokemon: " << vidacharizard << std::endl;
        }
        else if (ataqueseleccionadocharizard == 2)
        {
            std::system("pause");
            std::system("cls");
            vidapikachu -= ataquec2;
            vidacharizard -= randomValue;
            std::cout << "Has atacado con ataque llamarada  infligiendole 30 de daño a pikachu" << std::endl;
            std::cout << "Pikachu ataca devuelta con " << randomValue << std::endl;
            std::cout << "Vida de Pikachu: " << vidapikachu << std::endl;
            std::cout << "Vida de tu pokemon: " << vidacharizard << std::endl;
        }
        else if (ataqueseleccionadocharizard == 3)
        {
            std::system("pause");
            std::system("cls");
            vidapikachu -= ataquec3;
            vidacharizard -= randomValue;
            vidacharizard -= 25;
            std::cout << "Has atacado con ataque lanzallamas infligiendole 35 de daño a pikachu y perdiendo 25 de vida" << std::endl;
            std::cout << "Pikachu ataca devuelta con " << randomValue << std::endl;
            std::cout << "Vida de Pikachu: " << vidapikachu << std::endl;
            std::cout << "Vida de tu pokemon: " << vidacharizard << std::endl;
        }
        else if (ataqueseleccionadocharizard == 4) {
            std::system("pause");
            std::system("cls");
            system("color 2f");
            int puntosCuracion = curacion();
            std::cout << "Charizard se ha curado añadiendo " << puntosCuracion << " puntos de vida" << std::endl;
            vidacharizard += puntosCuracion;
            std::cout << "Vida de Charizard: " << vidacharizard << std::endl;

            int accionPikachu = rand() % 2;

            if (accionPikachu == 0) {
                std::cout << "Pikachu ataca!" << std::endl;
                vidacharizard -= randomValue;
                std::cout << "Charizard recibe " << randomValue << " puntos de daño." << std::endl;
            }
            else {
                int puntosCuracionPikachu = 20;
                vidapikachu += puntosCuracionPikachu;
                std::cout << "\nPikachu se ha curado añadiendo " << puntosCuracionPikachu << " puntos de vida." << std::endl;
            }
            std::cout << "Vida de pikachu: " << vidapikachu << std::endl;
        }

    }

    if (vidacharizard <= 0)
    {
        system("cls");
        system("color 4f");
        std::cout << "\nCHARIZARD HA MUERTO" << std::endl;
    }
    else if (vidapikachu <= 0)
    {
        system("cls");
        system("color 4f");
        std::cout << "\nPIKACHU HA MUERTO" << std::endl;
    }

}
