#include<iostream>
using namespace std;
int main(void){
    int dia;
    cout<<"Deme un dia de la semana teniendo en cuenta que 1 es lunes y 7 es domingo\n";
    cin>>dia;
    switch(dia){
        case 1:  cout<<"Su dia es lunes y es laboral\n";
        break;
        case 2:  cout<<"Su dia es Martes y es laboral\n";
        break;
        case 3:  cout<<"Su dia es Miercoles y es laboral\n";
        break;
        case 4:  cout<<"Su dia es Jueves y es laboral\n";
        break;
        case 5:  cout<<"Su dia es Viernes y es laboral\n";
        break;
        case 6:  cout<<"Su dia es Sabado y no es laboral\n";
        break;
        case 7:  cout<<"Su dia es domingo y no es laboral\n";
        break;
        default: cout<<"ningun dia coincide con su numero\n";
        break;

        return 0;
        }
    }
    

  

   


