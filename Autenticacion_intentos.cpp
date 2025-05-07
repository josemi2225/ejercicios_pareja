#include <iostream>

using namespace std;

int main(void)
{

    int intento;
    string usuario, contrasena;

    cout << "Ingrese usuario y contraseña:\n";
    cin >> usuario;
    cout << "\n";
    cin >> contrasena;

    if (contrasena == "Hola123")
    {
        cout << "Contraseña correcta\n";
    }
    else
    {
        cout << "Intentalo de nuevo (intento2) \n";
        cout << "Ingrese usuario y contraseña:\n";
        cin >> usuario;
        cout << "\n";
        cin >> contrasena;
    }
    if (contrasena == "Hola123")
    {
        cout << "Contraseña correcta\n";
    }
    else
    {
        cout << "Intentalo de nuevo (intento3) \n";
        cout << "Ingrese usuario y contraseña:\n";
        cin >> usuario;
        cout << "\n";
        cin >> contrasena;
    }
    if (contrasena == "Hola123")
    {
        cout << "Contraseña correcta\n";
    }
    else
    {
        cout << "Ya no tienes mas intentos \n";
    }

    return 0;
}