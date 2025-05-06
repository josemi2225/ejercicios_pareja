#include <iostream>

using namespace std;
int main(void){
   
    int usuario , contra;
    cout<<"Ingrese su usuario:\n";
    cin>>usuario;
    if(usuario == 1234){
        cout<<"Ingrese su contra\n";
        cin>>contra;
        if(contra == 1234){
            cout<<"contra correcta\n"; 
        }else{
            cout<<"contra incorrecta\n";
        }

    }else{
        cout<<"Usuario no encontrado\n";
    }

}