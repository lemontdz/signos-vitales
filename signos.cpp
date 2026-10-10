#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    double f;

    std::cout << "Ingresa la temperatura en Fahrenheit: ";
    std::cin >> f;
   

    std::cout << f << " grados Fahrenheit equivalen a "
              << fahrenheitACelsius(f) << " grados Celsius." << std::endl;

    return 0;
}