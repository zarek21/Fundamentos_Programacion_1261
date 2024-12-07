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
    if (jugador1.vida > 0 && jugador2.vida <= 0) {
        std::cout << "El jugador " << jugador1.nombre << " gana con vida restante: " << jugador1.vida << std::endl;
    } else if (jugador2.vida > 0 && jugador1.vida <= 0) {
        std::cout << "El jugador " << jugador2.nombre << " gana con vida restante: " << jugador2.vida << std::endl;
    } else {
        std::cout << "Ambos jugadores están vivos, continúan en juego." << std::endl;
    }
}

void compararataque(Jugador& jugador1, Jugador& jugador2) {
    if (jugador1.ataque > jugador2.ataque) {
        std::cout << "El jugador con más ataque es: " << jugador1.nombre << " con un ataque de: " << jugador1.ataque << std::endl;
    } else if (jugador1.ataque < jugador2.ataque) {
        std::cout << "El jugador con más ataque es: " << jugador2.nombre << " con un ataque de: " << jugador2.ataque << std::endl;
    } else {
        std::cout << "¡Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

void comparardefensa(Jugador& jugador1, Jugador& jugador2) {
    if (jugador1.defensa > jugador2.defensa) {
        std::cout << "El jugador con más defensa es: " << jugador1.nombre << " con una defensa de: " << jugador1.defensa << std::endl;
    } else if (jugador1.defensa < jugador2.defensa) {
        std::cout << "El jugador con más defensa es: " << jugador2.nombre << " con una defensa de: " << jugador2.defensa << std::endl;
    } else {
        std::cout << "¡Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

void compararvida(Jugador& jugador1, Jugador& jugador2) {
    if (jugador1.vida > jugador2.vida) {
        std::cout << "El jugador con más vida es: " << jugador1.nombre << " con un total de vida de: " << jugador1.vida << std::endl;
    } else if (jugador1.vida < jugador2.vida) {
        std::cout << "El jugador con más vida es: " << jugador2.nombre << " con un total de vida de: " << jugador2.vida << std::endl;
    } else {
        std::cout << "¡Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

void compararresistencia(Jugador& jugador1, Jugador& jugador2) {
    if (jugador1.resistencia > jugador2.resistencia) {
        std::cout << "El jugador con más resistencia es: " << jugador1.nombre << " con un total de resistencia de: " << jugador1.resistencia << std::endl;
    } else if (jugador1.resistencia < jugador2.resistencia) {
        std::cout << "El jugador con más resistencia es: " << jugador2.nombre << " con un total de resistencia de: " << jugador2.resistencia << std::endl;
    } else {
        std::cout << "¡Empate entre " << jugador1.nombre << " y " << jugador2.nombre << "!" << std::endl;
    }
}

int main() {
    srand(time(0));

    std::string nombres[20] = {
        "Ivan", "Esteban", "Luisito Comunica", "Ruben", "Alex", "Aaron", "Gonzalo", "Peña",
        "Jose", "Lebron James", "Adam Sandler", "Carlos", "David", "Mau", "Lilian",
        "Mondy", "Anuel", "Messi", "Kendrick Lamar", "Sebastian"
    };

    Jugador jugadores[20];

    for (int i = 0; i < 20; i++) {
        jugadores[i].nombre = nombres[i];
        generarPropiedades(jugadores[i]);
        mostrarPropiedades(jugadores[i]);
    }

    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            std::cout << "Enfrentamiento entre " << jugadores[i].nombre << " y " << jugadores[j].nombre << ":\n";
            jugadorvivo(jugadores[i], jugadores[j]);
            compararataque(jugadores[i], jugadores[j]);
            comparardefensa(jugadores[i], jugadores[j]);
            compararvida(jugadores[i], jugadores[j]);
            compararresistencia(jugadores[i], jugadores[j]);
            std::cout << std::endl;
        }
    }

    return 0;
}
