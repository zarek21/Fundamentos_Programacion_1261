#include <iostream>
#include <string>
#include <locale>//Libreria para cambiar idiomas


int main() {
    // Realizaremos un login para un juego que se llamará "El prostipirugolfo"
    setlocale(LC_ALL, "en_US.UFT-8");
    // Vamos a definir las variables
    std::string nombrejugador;
    std::string correo;
    std::string contrasena;

    // Pedimos al jugador sus datos
    std::cout << "Por favor ingresa tu nombre: ";
    std::getline(std::cin, nombrejugador);
    std::cout << "Por favor ingresa tu correo: ";
    std::getline(std::cin, correo);
    std::cout << "Por favor ingresa tu contraseña: ";
    std::getline(std::cin, contrasena);

    // Verificamos que los datos no estén vacíos
    if (nombrejugador.empty() || correo.empty() || contrasena.empty()) {
        std::cout << "Ingresaste un dato incorrecto o no se reconoce, pal gulag." << std::endl;
        return 1;
    }
    else {
        std::cout << "Registro Exitoso. ¡Gracias por ser un prostipirugolfo más!" << std::endl;
    }

    // Ahora vamos a verificar si es mayor de edad
    int edad;
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    if (edad < 0) {
        std::cout << "Edad no válida, por favor ingresa un número positivo." << std::endl;
        return 1;
    }

    if (edad < 18) {
        std::cout << "Aquí no es la choza de los pequeñines." << std::endl;
    }
    else {
        std::cout << "Bienvenido hermano, ya eres todo un hombre." << std::endl;
    }

    // Ahora vamos a hacer 5 opciones de decisiones para el jugador

    // Definimos la variable para la dificultad
    std::string dificultad;

    // Pedimos al jugador que elija una dificultad
    std::cout << "Dime papoi, ¿qué dificultad quieres jugar? (Facil, Media o Hardcore): ";
    std::cin >> dificultad;

    if (dificultad == "Facil") {
        std::cout << "Va, eres un noob jajaja." << std::endl;
    }
    else if (dificultad == "Media") {
        std::cout << "Eso bro, al menos no eres miedoso." << std::endl;
    }
    else if (dificultad == "Hardcore") {
        std::cout << "De seguro eres un dios del olimpo papoi." << std::endl;
    }
    else {
        std::cout << "Dificultad no reconocida." << std::endl;
        return 1;
    }

    // Opciones de personaje
    std::string personaje;
    // Pedimos al jugador que elija su personaje
    std::cout << "Por favor elige un personaje (El Kevin, Adan, La Roca): " << std::endl;
    std::cin >> personaje;

    if (personaje == "El Kevin") {
        std::cout << "Has escogido al Kevin, un personaje intelectual." << std::endl;
    }
    else if (personaje == "Adan") {
        std::cout << "Abogado penalista, le gustan los deportes extremos." << std::endl;
    }
    else if (personaje == "La Roca") {
        std::cout << "Atlético con un hámster asesino como mascota." << std::endl;
        return 1;
    }


    // Opción escoger tu arma
    std::string arma;
    // Pedimos que elija su arma
    std::cout << "Por favor elige tu arma para masacrar a los zombies del tapanko (Rifle AR, Machete Oxidado, Raygun): " << std::endl;
    std::cin >> arma;

    if (arma == "Rifle AR") {
        std::cout << "Mmm, esperaba más de ti hermanito." << std::endl;
    }
    else if (arma == "Machete Oxidado") {
        std::cout << "Eso bro, te gusta matar zombies." << std::endl;
    }
    else if (arma == "Raygun") {
        std::cout << "Un clásico, mis respetos." << std::endl;
    }
    else {
        std::cout << "Arma no reconocida." << std::endl;
        return 1;
    }

    // Opción Rol
    std::string rol;
    // Pedimos al jugador que elija su rol
    std::cout << "Por favor elige tu rol para la batalla (Guerrero, Mago, Arquero): " << std::endl;
    std::cin >> rol;

    if (rol == "Guerrero") {
        std::cout << "Has elegido al Guerrero, la fuerza bruta te llevará a la victoria." << std::endl;
    }
    else if (rol == "Mago") {
        std::cout << "Has elegido al Mago, el poder de los elementos está de tu lado." << std::endl;
    }
    else if (rol == "Arquero") {
        std::cout << "Has elegido al Arquero, tu precisión será letal en la distancia." << std::endl;
    }
    else {
        std::cout << "Rol no reconocido." << std::endl;
        return 1;
    }

    // Opción empezar o no
    std::string empezar;
    // Preguntamos al jugador si desea empezar
    std::cout << "¿Deseas empezar el juego? (si/no): ";
    std::cin >> empezar;

    if (empezar == "si") {
        std::cout << "¡Excelente! Empezando el juego..." << std::endl;
    }
    else if (empezar == "no") {
        std::cout << "Está bien, ya sabía que no eras real bro." << std::endl;
        return 0;
    }
    else {
        std::cout << "Respuesta no válida." << std::endl;
        return 1;
    }

    return 0;
}