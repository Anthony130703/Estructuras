#include <iostream>
using namespace std;

struct persona
{
    char name[30];
    int age;

}persona1;

int main()
{
    cout << "Ingrese el nombre: ";
    cin.getline(persona1.name, 30, '\n');
    cout << "Ingrese la edad: ";
    cin >> persona1.age;
    cout << "\nEl nombre ingresado es: " << persona1.name << endl;
    cout << "La edad ingresada es: " << persona1.age <<endl;

    return 0;
}