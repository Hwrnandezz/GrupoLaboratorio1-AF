#include <iostream>
#include <string>
#include <vector>

double calorias_iniciales = 2000;
double calorias_agregadas = 0;
double calorias_eliminadas = 0;

void AgregarCalorias(double &calorias, double cant);
void quemarCalorias(double *totalCalorias, double caloriasEjercicio);

double Consultar_calorias(double calorias_iniciales, double calorias_agregadas, double calorias_eliminadas)
{
    double total = calorias_iniciales + calorias_agregadas - calorias_eliminadas;

    std::cout << "Calorias iniciales: " << calorias_iniciales << "\n";
    std::cout << "Calorias agregadas: " << calorias_agregadas << "\n";
    std::cout << "Calorias eliminadas: " << calorias_eliminadas << "\n";
  
    return total;
}

int menu()
{
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

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Entrada invalida. Por favor ingresa un numero.\n";
            continue;
        }

        switch (opcion)
        {
        case 1:
            Consultar_calorias(calorias_iniciales, calorias_agregadas, calorias_eliminadas);
            break;
        case 2:
        {
            double cant;
            std::cout << "Cuantas calorias deseas agregar? ";
            std::cin >> cant;
            AgregarCalorias(calorias_agregadas, cant);
            break;
        }
        case 3:
        {
            double cant;
            std::cout << "Cuantas calorias quemadas? ";
            std::cin >> cant;
            quemarCalorias(&calorias_eliminadas, cant);
            break;
        }
        case 4:
            std::cout << "Saliendo...\n";
            break;
        default:
            std::cout << "Opcion no valida.\n";
            break;
        }
    }
    return 0;
}

void AgregarCalorias(double &calorias, double cant)
{
    if (cant < 0)
    {
        std::cout << "No se permiten cantidades negativas." << "\n";
    }
    else
    {
        calorias += cant;
        std::cout << "Operacion realizada correctamente. Se agregaron " << cant << " calorias." << "\n";
    }
}

void quemarCalorias(double *totalCalorias, double caloriasEjercicio)
{
    if (totalCalorias != nullptr)
    {
        *totalCalorias -= caloriasEjercicio;
        std::cout << "Se quemaron " << caloriasEjercicio << " calorias" << "\n";
    }
    else
    {
        std::cout << "Error: puntero nulo" << "\n";
    }
}

int main()
{
    menu();
    return 0;
}