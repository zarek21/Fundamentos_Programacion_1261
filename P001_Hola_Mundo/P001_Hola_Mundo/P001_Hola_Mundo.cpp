// P001_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jorge Saleme
//Este archivo contiene la funcion 
//"main". La ejecucion del programa
//Comienza y termina ahi.
//Hablaremos con el usuario mediante
//STD::COUT << " ";
//Declaracion de variables y operaciones aritmeticas
//Sintaxys de decisiones
//La palabra reservada es IF
//Lo que este dentro del parentesis IF es verdad 
//Decisiones Double Sintaxys.
// if (TRUE) 
// Else (Falso)
#include <iostream>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <locale>//Libreria para cambiar idiomas
#include <codecvt>//Libreria para combiar codigos de UFT
using namespace std;
int main()
{
    //
    setlocale(LC_ALL, "en_US.UFT-8");
    cout << "Chucky!\n";
    //Inicializarmeos las variables de diferentes tipos
    //Tipo Nombre = Valor asignado de declaracion o inicializacion
    //Para guardar numeros enteros Reales
    int Edad = 0;
    //Para guardar numeros decimales 
    float Altura = 0;
    float Cali = 0;
    //Para guardar VERDADES o FALSEDADES
    bool d1 = false;
    //Para guardar numeros REALMENTE EXTENSOS 
    double Expoencial = 0;
    //Para guardar letras!!
    char sexo[30] = "";
    //Para guardar cadenas de caracteres osea muchas letras
    char nombre[30] = "";
    std::string name = "";


    // Hablaremos con el usuario y solicitaremos la información.
    std::cout << "Cuéntame!! ¿Cuántos años tienes? ";
    std::cin >> Edad;

    std::cout << "Entonces tienes: " << Edad << " años, ¡super! Bienvenido." << std::endl;

    std::cout << "Por favor, ingresa tu altura: ";
    std::cin >> Altura;

    std::cout << "Perfecto, muchas gracias. Ahora dime tus calificaciones: ";
    std::cin >> Cali;

    // Entrada de cadena de texto
    char(30);
    std::cout << "Por favor, ingresa una cadena de caracteres larga: " << std::endl;
    std::cin >> nombre;
    std::cout << "Gracias, tu cadena de caracteres larga es: " << nombre << std::endl;

    // Double
    double Entradadetextodoble;
    std::cout << "Por favor, ingresa un número largo, como tu última relación rey: " << std::endl;
    std::cin >> Entradadetextodoble;

    // char
    char(30);
    std::cout << "Por favor, ingresa un nombre: " << std::endl;
    std::cin >> nombre;
    std::cout << "Gracias, tu nombre es: " << nombre << std::endl;

    // Char sexo
    char(30);
    std::cout << "Por favor, ingresa tu sexo chulo/a: ";
    std::cin >> sexo;
    std::cout << "Gracias, tu sexo es: " << sexo << std::endl;

    // Boleana
    bool Entradadetextoboleano;
    std::cout << "Por favor, ingresa un booleano (0 o 1): " << std::endl;
    std::cin >> Entradadetextoboleano;

    // Hacer una suma de dos datos que ingrese el usuario
    int numero1, numero2;
    std::cout << "Por favor, ingresa un número para sumar: " << std::endl;
    std::cin >> numero1;

    std::cout << "Ingresa el segundo número: " << std::endl;
    std::cin >> numero2;

    std::cout << "Gracias, el resultado de la suma es: " << (numero1 + numero2) << std::endl;

    // Hacer una resta de dos números
    int numero3, numero4;
    std::cout << "Por favor, ingresa un número para restar: " << std::endl;
    std::cin >> numero3;

    std::cout << "Por favor, ingresa otro número para la resta: " << std::endl;
    std::cin >> numero4;

    std::cout << "Gracias, el resultado de la resta es: " << (numero3 - numero4) << std::endl;

    // Hacer una multiplicación con dos datos
    int numero5, numero6;
    std::cout << "Por favor, ingresa un número para multiplicar: " << std::endl;
    std::cin >> numero5;

    std::cout << "Por favor, ingresa otro número: " << std::endl;
    std::cin >> numero6;

    std::cout << "Gracias, el resultado de la multiplicación es: " << (numero5 * numero6) << std::endl;

    // Hacer una división con dos datos
    int numero7, numero8;
    std::cout << "Por favor, ingresa dos números para dividir: " << std::endl;
    std::cin >> numero7;

    std::cout << "Por favor, ingresa el segundo número: " << std::endl;
    std::cin >> numero8;

    std::cout << "Gracias, el resultado de la división es: " << (numero7 / numero8) << std::endl;

    // Hacer raíz de un número
    int numero9;
    std::cout << "Por favor, ingresa un número para sacar su raíz: " << std::endl;
    std::cin >> numero9;

    std::cout << "Gracias, la raíz del número es: " << sqrt(numero9) << std::endl;

    // Sacar potencia de un número
    int numero10, numero11;
    std::cout << "Por favor, ingresa un valor para sacar su potencia: " << std::endl;
    std::cin >> numero10;

    std::cout << "Ahora ingresa la potencia a la que quieres elevarlo: " << std::endl;
    std::cin >> numero11;

    std::cout << "Gracias, el valor del número elegido junto con su potencia es: " << pow(numero10, numero11) << std::endl;

    // Definir Mayor y Definir Menor de dos valores
    {
        int numero12 = 0, numero13 = 0;
        std::cout << "Ingresa dos valores: " << std::endl;
        std::cin >> numero12;
        std::cin >> numero13;

        if (numero12 > numero13) {
            std::cout << "El primer valor es mayor que" << numero13 << std::endl;
        }
        else if (numero12 < numero13)
        {
            std::cout << "El primer valor es menor que" << numero13 << std::endl;

        }
        else
        {
            std::cout << "Ambos valores son iguales" << std::endl;
        }

    }

    //Valor Absoluto
    double numero; // Definimos una variable para almacenar el número
    double valor_absoluto; // Variable para el valor absoluto

    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    // Calcular el valor absoluto
    if (numero >= 0) {
        valor_absoluto = numero; // Si es positivo o cero
    }
    else {
        valor_absoluto = numero * (-1); // Si es negativo
    }
    std::cout << "El valor absoluto es: " << valor_absoluto << std::endl;

    return 0;

    cout << "Bienvenido al sistema de gestion de estudiantes" << ::endl;


}