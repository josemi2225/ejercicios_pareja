#include <iostream>

using namespace std;

int main(void)
{

    
    int calificacion,anos,infracciones,experiencia;

    cout << "Ingrese su edad:\n";
    cin >> anos;
    cout << "Ingrese infracciones obtenidas";
    cin >> infracciones;
    cout << "Años de experencia \n";
    cin >> experiencia; 

    if (anos > 21) 
    {
        calificacion = 10;
    }
    else
    {
        calificacion = 5;
    }
    if (infracciones > 2) 
    {
        calificacion = calificacion - 1; // resatar puntos a la calificacion anterior puede ser 9 o 4 
    }
    else
    {
        calificacion = calificacion + 1; // suma puntos a la calificacion anterior puede ser 11 o 6 
    }
    if (experiencia > 5 ) 
    {
        calificacion = calificacion + 2; // suma puntos la calificacion puede ser 11,6,13,8
    }
    else
    {
        calificacion = calificacion -2 ; // resta puntos la califiacion puede ser 7,2,9,4
    }


    if (calificacion == 11) 
    {
        cout << "Conductor mayor con experiencia y con infracciones";
    }
    else if(calificacion == 6)
    {
        cout << "Conductor joven con experiencia y con infracciones";
        
    }

    else if(calificacion == 13)
    {
        cout << "Conductor mayor con experiencia y sin infracciones";
        
    }

    else if(calificacion == 8)
    {
        cout << "Conductor joven con experiencia y sin infracciones";
        
    }

    else if(calificacion == 7)
    {
        cout << "Conductor mayor sin experencia y con infracciones";
        
    }

    else if(calificacion == 2)
    {
        cout << "Conductor joven sin experiencia y con infracciones";
        
    }

    else if(calificacion == 9)
    {
        cout << "Conductor mayor sin experiencia y sin infracciones";
        
    }

    else if(calificacion == 4)
    {
        cout << "Conductor joven sin experiencia y sin infracciones";
        
    }

    return 0;
}