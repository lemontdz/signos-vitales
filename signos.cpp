#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

void ejecutarFrecuenciaCardiaca() {
    int lpm_prueba; 
    std::cout << "\n--- MODULO FRECUENCIA CARDIACA ---" << std::endl;
    std::cout << "Ingrese la frecuencia cardiaca (lpm): ";
    std::cin >> lpm_prueba;

    std::cout << "Frecuencia cardiaca (" << lpm_prueba << " lpm): " 
              << clasificarFrecuencia(lpm_prueba) << std::endl;
}


double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}



int main() {
   
    double f;
    std::cout << "--- MODULO TEMPERATURA ---" << std::endl;
    std::cout << "Ingresa la temperatura en Fahrenheit: ";
    std::cin >> f;

    std::cout << f << " grados Fahrenheit equivalen a "
              << fahrenheitACelsius(f) << " grados Celsius." << std::endl;
   

    ejecutarFrecuenciaCardiaca();

    return 0;
}
