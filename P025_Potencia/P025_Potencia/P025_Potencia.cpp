#include <iostream>
int potencias(int a, int b) {
	if (b == 0)
	{
		return 1;
	}
	else
	{
		return a * potencias(a, b - 1);
	}

}



int main() {
	int numero, potencia;
	std::cout << "Ingresa el numero base: ";
	std::cin >> numero;
	std::cout << "\nIngresa la potencia a la que quieres elevarlo: ";
	std::cin >> potencia;
	std::cout << "El resultado es: " << potencias(numero, potencia) << std::endl;
	return 0;

}