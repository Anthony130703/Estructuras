#include <iostream>
#include <limits>  // Biblioteca necesaria para numeric_limits
#include <stdlib.h>  //BIBLIOTECA PARA CREAR ARREGLO DINAMICO

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
};

int main()
{
    int numEmpleados=0;
    cout << "Ingrese el numero de emppleados a registrar: ";
    cin >> numEmpleados;

    //LIMPIAR EL BUFFER DE ENTRADA DESPUES DE RESIVIR EL NUMERO
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //CREANDO EL ARREGLO DINAMICO
    empleado* empleados = new empleado[numEmpleados];

    cout << endl;

    for(int i=0;i<numEmpleados;i++)
    {
        cout << "Empleado " << i+1 << endl;
        cout << "Ingrese el nombre: ";
        cin.getline(empleados[i].name, 40, '\n');
        cout << "Ingrese la direccion: ";
        cin.getline(empleados[i].dir_empleado.address, 50, '\n');
        cout << "Ingrese la ciudad: ";
        cin.getline(empleados[i].dir_empleado.city, 50, '\n');
        cout << "Ingrese la provincia: ";
        cin.getline(empleados[i].dir_empleado.province, 40, '\n');
        cout << "Ingrese el salario: ";
        cin >> empleados[i].salario;

        // Limpiar el buffer de entrada para evitar problemas con getline
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Esta línea es la clave

        cout << endl;

    }

    //IMPRIMIENDO LOS DATOS INGRESADOS
    for(int i=0;i<numEmpleados;i++)
    {
        cout << "Empleado " << i+1 << endl;
        cout << "Nombre: " << empleados[i].name << endl;
        cout << "Direccion: " << empleados[i].dir_empleado.address << endl;
        cout << "Ciudad: " << empleados[i].dir_empleado.city << endl;
        cout << "Provincia: " << empleados[i].dir_empleado.province << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << endl;
    }

    //LIMPIANDO LA MEMORIA ASIGANAD DINAMICAMENTE
    delete[] empleados;
    
    return 0;
}