#include <iostream>

using namespace std;

int main(void)
{

    
    string usuario, contrasena,contrasena2;

    cout << "Ingrese usuario y contraseña:\n";
    cin >> usuario;
    cout << "\n";
    cin >> contrasena;
    cout << "Vuelvo a ingresar tu contraseña\n";
    cin >> contrasena2; 

    if (contrasena == contrasena2)
    {
        cout << "Contraseña verificada\n";
    }
    else
    {
        cout << "Contraseña no coincide \n";
        
    }
    

    return 0;
}