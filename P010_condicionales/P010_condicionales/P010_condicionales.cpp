//Utilizar las decisiones simples para realizar una comparación de datos - Login en un videojuego. 
//Protegiendo al código de recibir solo letras o solo números según sea el caso.
#include <iostream>
#include <string>
#include <locale> // esta libreria incluye la funcion de isalpha en c++ 
#include <locale.h>
bool esSoloLetras(const std::string& cadena) {
    // Comprobar si todos los caracteres son letras
    for (char c : cadena) {
        if (!std::isalpha(c)) {
            return false; // Si algún carácter no es letra, devuelve false
        }
    }
    return true; // Si todos son letras, devuelve true
}

int main() {
    std::string usuario_g = "JJJ";
    std::string contrasena_g = "555";

    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string usuario;
    std::string contrasena;




    std::cout << "Introduce tu usuario: ";
    std::getline(std::cin, usuario);


    if (esSoloLetras(usuario) && usuario == usuario_g)
    {
        std::cout << "Bienvenido Usuario" << std::endl;


        std::cout << "Introduce tu contraseña: ";
        std::getline(std::cin, contrasena);



        if (esSoloLetras(contrasena) && contrasena != contrasena_g) {
            std::cout << "Contraseña incorrecta, solo se aceptan numeros" << std::endl;
        }
        else {
            std::cout << "Bienvenido papu." << std::endl;
        }

    }
    else {
        std::cout << "Solo se aceptan letras en usuario" << std::endl;
    }

}