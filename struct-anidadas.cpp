#include <iostream>
#include <limits>  // Biblioteca necesaria para numeric_limits
using namespace std;


struct inf_address
{
    char address[50];
    char city[50];
    char province[40];
};

struct empleado
{
    char name[40];
    struct inf_address dir_empleado;
    double salario;
}empleado[2];

int main()
{
    for(int i=0;i<2;i++)
    {
        cout << "Empleado " << i+1 << endl;
        cout << "Ingrese el nombre: ";
        cin.getline(empleado[i].name, 40, '\n');
        cout << "Ingrese la direccion: ";
        cin.getline(empleado[i].dir_empleado.address, 50, '\n');
        cout << "Ingrese la ciudad: ";
        cin.getline(empleado[i].dir_empleado.city, 50, '\n');
        cout << "Ingrese la provincia: ";
        cin.getline(empleado[i].dir_empleado.province, 40, '\n');
        cout << "Ingrese el salario: ";
        cin >> empleado[i].salario;
        // Limpiar el buffer de entrada para evitar problemas con getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Esta línea es la clave
        cout << endl;

    }

    //IMPRIMIENDO LOS DATOS INGRESADOS
    for(int i=0;i<2;i++)
    {
        cout << "Empleado " << i+1 << endl;
        cout << "Nombre: " << empleado[i].name << endl;
        cout << "Direccion: " << empleado[i].dir_empleado.address << endl;
        cout << "Ciudad: " << empleado[i].dir_empleado.city << endl;
        cout << "Provincia: " << empleado[i].dir_empleado.province << endl;
        cout << "Salario: " << empleado[i].salario << endl;
        cout << endl;
    }
    
    return 0;
}