#include <iostream>
#include <string>
#include <locale>
int main() {
	setlocale(LC_ALL, "en_MX.UTF-8");
	srand(static_cast<unsigned>(time(0)));
	int matriz[2][3];

	for (int i = 0; i < 2; i++)
	{
		for (int e = 0; e < 3; e++) {
			std::cout << "Ingrese el valor para la posición " << i << ", " << e << ": ";
			std::cin >> matriz[i][e];
		}
	}
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			std::cout << matriz[x][y];
		}
		std::cout << "\n";
	}
	system("pause");
	system("cls");

	//Matriz Dinamica  

	int filas, columnas = 0;
	std::cout << "Matriz Dinamica" << std::endl;
	std::cout << "Ingresa las columnas para la matriz: " << std::endl;
	std::cin >> filas;
	std::cout << "Ingresa las filas para la matriz: " << std::endl;
	std::cin >> columnas;

	int** dinamica = new int* [filas, columnas];

	for (int i = 0; i < filas; i++) {
		dinamica[i] = new int[columnas];

	}

	if (filas >= 4 || columnas >= 4)
	{
		for (int x = 0; x < filas; x++)
		{
			for (int y = 0; y < columnas; y++)
			{
				dinamica[x][y] = rand() % 11;
				std::cout << dinamica[x][y] << " ";
			}
			std::cout << "\n";
		}
	}



	else
	{


		for (int i = 0; i < filas; i++) {
			dinamica[i] = new int[columnas];

		}

		for (int i = 0; i < filas; i++)
		{
			for (int e = 0; e < 3; e++) {
				std::cout << "Ingrese el valor para la posición " << i << ", " << e << ": ";
				std::cin >> dinamica[i][e];
			}
		}
		for (int x = 0; x < filas; x++)
		{
			for (int y = 0; y < columnas; y++)
			{
				std::cout << dinamica[x][y];
			}
			std::cout << "\n";
		}
	}
	for (int i = 0; i < filas; i++)
	{
		delete[]dinamica[i];
	}
	delete[]dinamica;
	return 0;
}