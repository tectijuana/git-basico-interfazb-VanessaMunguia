#include <iostream>
#include <math.h>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Si un circulo tiene un radio de 8 cm ¿Cual es el area de la superficie?

int main()
{
float radio=8;
float area;
std::cout << " Area de un Circulo" << std::endl;
//Area
area=M_PI*(radio*radio);
std::cout << "Area: " << area << std::endl;

    return 0;
}
