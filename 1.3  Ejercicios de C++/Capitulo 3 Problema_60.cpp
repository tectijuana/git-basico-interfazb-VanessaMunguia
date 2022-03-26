#include <iostream>
#include <math.h>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Calcular el volumen de cualquier cilindro si se conoce el radio y la altura.

int main()
{
    float r;
    float h;
    float volumen;
    
    //captura de valores
    cout << "Radio: ";
    cin >> r;
    cout << "Altura: ";
    cin >> h;
    
    std::cout << " Volumen de un cilindro" << std::endl;
    //Volumen
    volumen=M_PI*((r*r)*h);
    std::cout << "Volumen: " << volumen << std::endl;

    return 0;
}
