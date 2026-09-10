#include <iostream>

void AgregarCalorias(int &calorias, int cant);

int main() {


    return 0;
}

void AgregarCalorias(int &calorias, int cant) {
    if (cant < 0) {
        std::cout << "No se permiten cantidades negativas." << "\n";
    } else {
        calorias += cant;
        std::cout << "Operacion realizada correctamente. Se agregaron " << cant << " calorias." << std::endl;
    }
}