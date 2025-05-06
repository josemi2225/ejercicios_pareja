#include<iostream>

using namespace std;

int main (void){

    int n;

    cout << "Por favor ingrese un numero:\n";
    cin >> n;

    if (n % 2 == 0){
        cout << "Tu numero es par\n";
    }else{
        cout << "Tu numero es impar\n";

    }



    return 0;
}