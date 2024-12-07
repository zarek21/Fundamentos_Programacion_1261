//Tenemos que contar del 1000 al 0 usando los 3 ciclos
//Contar 10*10
//Contar hasta 100 lento
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    // Usando ciclo for
    std::cout << "for" << std::endl;
    for (int i = 1000; i >= 0; i--) {
        i;
    }


    // Usando ciclo While
    int j = 1000;
    std::cout << "while" << std::endl;
    while (j >= 0)
    {
        j--;
    }



    // Usando ciclo Do While
    int k = 1000;
    do
    {
        k--;
    } while (k >= 0);


    // Contar 10x10 (hasta 100)
    int l = 1;
    do {
        std::cout << l << " ";
        l++;
    } while (l <= 100);
    std::cout << std::endl;

    // Contar hasta 100 lento
    for (int m = 1; m <= 100; m++) {
        std::cout << m << " ";
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;

    return 0;
}