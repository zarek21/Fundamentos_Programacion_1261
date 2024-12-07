#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


struct Jugador {
    int estado = 0;
    int vida;
    int ataque;
    int defensa;
    int resistencia;
    std::string nombre;
};




void generarPropiedades(Jugador& jugador) {
    jugador.vida = rand() % 51;
    jugador.ataque = rand() % 51;
    jugador.defensa = rand() % 51;
    jugador.resistencia = rand() % 51;
}


void mostrarPropiedades(const Jugador& jugador) {
    std::cout << "Jugador: " << jugador.nombre << std::endl;
    std::cout << "Vida: " << jugador.vida << std::endl;
    std::cout << "Ataque: " << jugador.ataque << std::endl;
    std::cout << "Defensa: " << jugador.defensa << std::endl;
    std::cout << "Resistencia: " << jugador.resistencia << std::endl;
    std::cout << std::endl;
}


void jugadorvivo(Jugador& jugador1, Jugador& jugador2) {
    const int estado = 0;
    int vida1 = estado;
    int vida2 = estado;
    if (estado == vida1)
    {
        std::cout << "El jugador 1 gana con : ";
    }
    else
    {
        std::cout << "El jugador 2 gana con: ";
    }

}

void compararataque(Jugador& jugador1, Jugador& jugador2) {
    int puntos1 = jugador1.ataque;
    int puntos2 = jugador2.ataque;

    if (puntos1 > puntos2) {
        std::cout << "el jugador con mas ataque es :" << jugador1.nombre << " con un ataque de: " << jugador1.ataque << std::endl;
    }
    else if (puntos1 < puntos2) {
        std::cout << "el jugador con mas ataque es :" << jugador2.nombre << " con un ataque de: " << jugador2.ataque << std::endl;
    }
    else {
        std::cout << "�Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

void comparardefensa(Jugador& jugador1, Jugador& jugador2) {
    int puntos1 = jugador1.defensa;
    int puntos2 = jugador2.defensa;

    if (puntos1 > puntos2) {
        std::cout << "el juagador con mas defensa es :" << jugador1.nombre << " con una defensa de: " << jugador1.defensa << std::endl;
    }
    else if (puntos1 < puntos2) {
        std::cout << "el juagador con mas defensa es :" << jugador2.nombre << " con una defensa de: " << jugador2.defensa << std::endl;
    }
    else {
        std::cout << "�Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

void compararvida(Jugador& jugador1, Jugador& jugador2) {
    int puntos1 = jugador1.vida;
    int puntos2 = jugador2.vida;

    if (puntos1 > puntos2) {
        std::cout << "el juagador con mas vida es : " << jugador1.nombre << " con un total de vida de: " << jugador1.vida << std::endl;
    }
    else if (puntos1 < puntos2) {
        std::cout << "el juagador con mas vida es : " << jugador2.nombre << " con un total de vida de: " << jugador2.vida << std::endl;
    }
    else {
        std::cout << "�Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

void compararresistencia(Jugador& jugador1, Jugador& jugador2) {
    int puntos1 = jugador1.resistencia;
    int puntos2 = jugador2.resistencia;

    if (puntos1 > puntos2) {
        std::cout << "el juagador con mas resistencia es : " << jugador1.nombre << " con un total de resistencia de: " << jugador1.resistencia << std::endl;
    }
    else if (puntos1 < puntos2) {
        std::cout << "el juagador con mas resistencia es : " << jugador2.nombre << " con un total de resistencia de: " << jugador2.resistencia << std::endl;
    }
    else {
        std::cout << "�Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}


int main() {
    srand(time(0));

    std::string nombres[20] = {
        "Ivan", "Esteban", "Luisito Comunica", "Ruben", "Alex", "Aaron", "Gonzalo", "Pe�a",
        "Jose", "Lebron James", "Adam Sandler", "Carlos", "David", "Mau", "Lilian",
        "Mondy", "Anuel", "Messi", "Kendrick Lamar", "Sebastian"
    };


    Jugador jugadores[20];


    for (int i = 0; i < 20; i++) {
        jugadores[i].nombre = nombres[i];
        generarPropiedades(jugadores[i]);
        mostrarPropiedades(jugadores[i]);
    }

    /*/for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            std::cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[j].nombre << ":" << std::endl;
            compararJugadores(jugadores[i], jugadores[j]);
            std::cout << "\n";
        }
    }*/
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            std::cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[j].nombre << ":" << std::endl;
            if (jugadorvivo)
            {
                compararataque(jugadores[i], jugadores[j]);
                std::cout << "\n";
            }
            else
            {
                compararataque(jugadores[i + 1], jugadores[j + 1]);

            }
        }
    }
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            std::cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[j].nombre << ":" << std::endl;
            comparardefensa(jugadores[i], jugadores[j]);
            std::cout << "\n";
        }
    }
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            std::cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[j].nombre << ":" << std::endl;
            compararvida(jugadores[i], jugadores[j]);
            std::cout << "\n";
        }
    }
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            std::cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[j].nombre << ":" << std::endl;
            compararresistencia(jugadores[i], jugadores[j]);
            std::cout << "\n";
        }
    }
    return 0;
}