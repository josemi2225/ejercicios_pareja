#include <iostream>

using namespace std;

int main (void){

    int materia;

    cout << "Ingrese la nota de su materia:\n";
    cin >> materia;

    if (materia >= 60){
        cout << "Aprobaste la materia\n";
    }else{
        cout << "No aprobaste la materia\n";

    }
    return 0;
}