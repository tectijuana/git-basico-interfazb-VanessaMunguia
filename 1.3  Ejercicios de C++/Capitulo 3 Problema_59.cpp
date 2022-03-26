#include <iostream>
#include <math.h>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Calcular y desplegar el volumen de un cilindro de Radio r y altura h.

int main()
{
    float r=10;
    float h=32;
    float volumen;
    
    std::cout << " Volumen de un cilindro" << std::endl;
    //Volumen
    volumen=M_PI*((r*r)*h);
    cout << "Radio = "<< r << " Altura = " << h << endl; 
    std::cout << "Volumen: " << volumen << std::endl;

    return 0;
}
