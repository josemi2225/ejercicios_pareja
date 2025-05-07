#include <iostream>
using namespace std;

int main(void){
    int peso;
    cout << "Ingrese el peso de su paquete en kg:\n";
    cin >> peso;

    if (peso <= 5) {
        cout << "Su envio cuesta 5 dolares\n";
    } else if (peso >= 6 && peso <= 10) {
        cout << "Su envio cuesta 10 dolares\n";
    } else if (peso > 10) {
        cout << "Su envio cuesta 15 dolares\n";
    } else {
        cout << "Peso no valido\n"; 
    }
    return 0;
}