#include <iostream>

int producto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b > 0) {
        return a + producto(a, b - 1);
    }
    return -producto(a, -b);
}

int main() {
    int num1, num2;

    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    int resultado = producto(num1, num2);
    std::cout << "El producto de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}