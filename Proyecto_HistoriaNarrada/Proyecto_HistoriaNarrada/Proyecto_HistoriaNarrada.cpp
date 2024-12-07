#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void imprimirLento(const std::string& texto, int delay = 50) {
    for (char c : texto) {
        std::cout << c;
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
    std::cout << std::endl;
}

int main() {
    std::string desicion;

    // Introducción
    imprimirLento("Bienvenido a Dante's Demons\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");

    imprimirLento("Aquí las decisiones que tomes afectarán el desarrollo de la historia...\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");

    imprimirLento("Dante se encuentra caminando tranquilamente, cuando de repente siente un aura y el ambiente se siente pesado, el aire se vuelve difícil de respirar.\n");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    system("cls");

    imprimirLento("¡Bam! ¡Aparece el demonio de la IRA frente a Dante!\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    system("cls");

    imprimirLento("Elige tu acción: \n");
    imprimirLento("1. Atacar al demonio\n 2. Correr\n 3. Intentar dialogar\n");
    std::cin >> desicion;

    if (desicion == "1") {
        imprimirLento("\nDante decide atacar al demonio con toda su furia. La batalla es intensa, pero el demonio lo golpea fuertemente, dejándolo herido.\n");
        system("pause");
        system("cls");

        imprimirLento("El demonio sonríe y dice: 'Tu furia te consume, Dante. Nunca escaparás de ti mismo.'\n");
        system("pause");
        system("cls");

        imprimirLento("Dante cae al suelo, agotado. ¿Qué hará ahora?\n");
        imprimirLento("1. Levantarse y continuar luchando.\n");
        imprimirLento("2. Rendirte y esperar el golpe final.\n");
        std::cin >> desicion;

        if (desicion == "1") {
            imprimirLento("\nDante se levanta con esfuerzo, decidido a no dejarse vencer. La lucha continúa y, al final, derrota al demonio.\n");
            system("pause");
            system("cls");
            imprimirLento("A través de la lucha, Dante se enfrenta a su propia ira y logra superarla. Ha dado un paso hacia la redención.\n");
        }
        else {
            system("color 4");
            imprimirLento("\nDante se rinde y el demonio lo consume. Su viaje termina aquí...\n");
            system("pause");
            system("cls");
        }

    }
    else if (desicion == "2") {
        imprimirLento("\nDante decide correr, pero el demonio de la Ira es rápido. Lo persigue y lo alcanza antes de que pueda escapar.\n");
        system("pause");
        system("cls");

        imprimirLento("El demonio dice: 'Tu cobardía te hará sucumbir, Dante.'\n");
        system("pause");
        system("cls");

        imprimirLento("Dante se enfrenta a la decisión de luchar o rendirse. ¿Qué hará?\n");
        imprimirLento("1. Luchar contra el demonio.\n");
        imprimirLento("2. Aceptar su destino y rendirse.\n");
        std::cin >> desicion;

        if (desicion == "1") {
            imprimirLento("\nDante decide luchar y, a pesar de las dificultades, finalmente derrota al demonio.\n");
            system("pause");
            system("cls");
            imprimirLento("Dante supera su miedo y su ira. Ha dado un paso hacia su redención.\n");
        }
        else {
            system("color 4");
            imprimirLento("\nDante se rinde, y el demonio lo consume. Su viaje termina aquí...\n");
            system("pause");
            system("cls");
        }

    }
    else if (desicion == "3") {
        imprimirLento("\nDante intenta dialogar con el demonio de la Ira. El demonio se detiene y escucha, pero no muestra ninguna simpatía.\n");
        system("pause");
        system("cls");

        imprimirLento("El demonio dice: 'Tus palabras no me afectan, Dante. La ira que llevas dentro te devorará.'\n");
        system("pause");
        system("cls");

        imprimirLento("Dante intenta razonar, pero el demonio lo desafía a enfrentarse a su propia furia. ¿Qué hará?\n");
        imprimirLento("1. Aceptar el desafío y enfrentarse a su ira.\n");
        imprimirLento("2. Intentar escapar.\n");
        std::cin >> desicion;

        if (desicion == "1") {
            imprimirLento("\nDante acepta el desafío y, en una lucha intensa, derrota al demonio enfrentando su ira y superándola.\n");
            system("pause");
            system("cls");
            imprimirLento("Con la ira derrotada, Dante encuentra paz dentro de sí mismo.\n");
        }
        else {
            system("color 4");
            imprimirLento("\nDante intenta escapar, pero el demonio lo alcanza y lo consume. Su viaje termina aquí...\n");
            system("pause");
            system("cls");
        }

    }
    else {
        imprimirLento("\nOpción no válida. Elige una de las opciones disponibles.\n");
    }

    return 0;
}