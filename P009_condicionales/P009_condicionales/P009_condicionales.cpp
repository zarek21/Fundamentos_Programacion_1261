#include <iostream>
#include <cmath>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int opcion;

    do {
        std::cout << "Selecciona una operación" << std::endl;
        std::cout << "1. Sumar dos números" << std::endl;
        std::cout << "2. Restar dos números" << std::endl;
        std::cout << "3. Multiplicar dos números" << std::endl;
        std::cout << "4. Dividir dos números" << std::endl;
        std::cout << "5. Sacar la raíz cuadrada de un número" << std::endl;
        std::cout << "6. Elevar un número a una potencia" << std::endl;
        std::cout << "7. Comparar dos números (mayor o menor)" << std::endl;
        std::cout << "8. Calcular el valor absoluto de un número" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            int numero1, numero2;
            std::cout << "Por favor, ingresa un número para sumar: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo número: ";
            std::cin >> numero2;
            std::cout << "Gracias, el resultado de la suma es: " << (numero1 + numero2) << std::endl;
            break;
        }
        case 2: {
            int numero1, numero2;
            std::cout << "Por favor, ingresa un número para restar: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo número: ";
            std::cin >> numero2;
            std::cout << "Gracias, el resultado de la resta es: " << (numero1 - numero2) << std::endl;
            break;
        }
        case 3: {
            int numero1, numero2;
            std::cout << "Por favor, ingresa un número para multiplicar: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo número: ";
            std::cin >> numero2;
            std::cout << "Gracias, el resultado de la multiplicación es: " << (numero1 * numero2) << std::endl;
            break;
        }
        case 4: {
            int numero1, numero2;
            std::cout << "Por favor, ingresa un número para dividir: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo número: ";
            std::cin >> numero2;
            if (numero2 != 0) {
                std::cout << "Gracias, el resultado de la división es: " << (numero1 / numero2) << std::endl;
            }
            else {
                std::cout << "Error: No se puede dividir entre 0." << std::endl;
            }
            break;
        }
        case 5: {
            int numero;
            std::cout << "Por favor, ingresa un número para sacar su raíz cuadrada: ";
            std::cin >> numero;
            if (numero >= 0) {
                std::cout << "Gracias, la raíz del número es: " << sqrt(numero) << std::endl;
            }
            else {
                std::cout << "Error: No se puede sacar la raíz cuadrada de un número negativo." << std::endl;
            }
            break;
        }
        case 6: {
            int base, exponente;
            std::cout << "Por favor, ingresa un número: ";
            std::cin >> base;
            std::cout << "Ingresa el exponente: ";
            std::cin >> exponente;
            std::cout << "El resultado de elevar " << base << " a la potencia " << exponente << " es: " << pow(base, exponente) << std::endl;
            break;
        }
        case 7: {
            int numero1, numero2;
            std::cout << "Ingresa el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo número: ";
            std::cin >> numero2;

            if (numero1 > numero2) {
                std::cout << "El primer número es mayor que el segundo.\n";
            }
            else if (numero1 < numero2) {
                std::cout << "El primer número es menor que el segundo.\n";
            }
            else {
                std::cout << "Ambos números son iguales.\n";
            }
            break;
        }
        case 8: {
            double numero;
            std::cout << "Por favor, ingresa un número para calcular su valor absoluto: ";
            std::cin >> numero;
            std::cout << "El valor absoluto de " << numero << " es: " << fabs(numero) << std::endl;
            break;
        }
        case 0:
            std::cout << "Saliendo del programa.\n";
            break;
        default:
            std::cout << "Opción no válida. Por favor elige una opción del 0 al 8.\n";
        }

    } while (opcion != 0);

    return 0;
}