#include <iostream>
#include <string>
#include <vector>

double calorias_iniciales=2000;
double calorias_agregadas=0;
double calorias_eliminadas=0;


double Consultar_calorias(double calorias_iniciales, double calorias_agregadas, double calorias_eliminadas){
    
    std::cout << "Calorias iniciales: " << calorias_iniciales << "\n";
    std::cout << "Calorias agregadas: " << calorias_agregadas << "\n";
    std::cout << "Calorias eliminadas: " << calorias_eliminadas << "\n";

    return calorias_iniciales;
}







int menu( ){

    int opcion = 0;
    while (opcion != 4)
    {
        std::cout << "\n---contador_de_calorias ---\n";
        std::cout << "1. mostrar_calorias\n";
        std::cout << "2. agregar_calorias\n";
        std::cout << "3. eliminar_calorias\n";
        std::cout << "4. Salir\n";
        std::cout << "Elige una opcion: ";
        std::cin >> opcion;
    
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Entrada invalida. Por favor ingresa un numero.\n";
            continue;
        }
    
        switch (opcion)
        {
            case 1:
                Consultar_calorias(calorias_iniciales, calorias_agregadas, calorias_eliminadas  );
                break;
            case 2:
                // Lógica para agregar calorias
                break;
            case 3:
                // Lógica para eliminar calorias
                break;
            case 4:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opcion no valida.\n";
                break;
        }
    }
}





























int main()
 {

   

    return 0;
}