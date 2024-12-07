#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

int main()
{

	//Declaramos Variable
	float numero1, numero2;

	// Solicitamos al usuario que ingrese los números
	std::cout << "Ingresa el primer número: ";
	std::cin >> numero1;

	std::cout << "Ingresa el segundo número: ";
	std::cin >> numero2;

	//Realizamos las operaciones aritméticas
	float suma = numero1 + numero2;
	float resta = numero1 - numero2;
	float multiplicacion = numero1 * numero2;
	float division = numero1 / numero2;
	float potencia = pow(numero1, numero2);

	// Mostramos los resultados
	std::cout << "Resultados: ";
	std::cout << "Suma: " << suma << std::endl;
	std::cout << "Resta: " << resta << std::endl;
	std::cout << "Multiplicación: " << multiplicacion << std::endl;
	std::cout << "División: " << (numero1 / numero2) << std::endl;
	std::cout << "Potencia (num1 ^ num2): " << potencia << std::endl;

	return 0;
}