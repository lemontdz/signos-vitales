#include <iostream>
#include <string>

// Función de la persona B
std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

int main() {
    // Llamado a la función desde main
    int lpm_prueba; // Puedes cambiar este valor para probar
    std::cout << "Ingrese la frecuencia cardiaca (lpm): ";
    std::cin >> lpm_prueba;

    std::cout << "Frecuencia cardiaca (" << lpm_prueba << " lpm): " 
              << clasificarFrecuencia(lpm_prueba) << std::endl;

    return 0;
}
