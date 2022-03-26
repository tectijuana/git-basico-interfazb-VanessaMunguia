#include <iostream>
#include <math.h>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Introducir el radio de un circulo y calcular su area

int main()
{
float radio;
float area;
std::cout << " Area de un Circulo" << std::endl;
cout << "Radio: ";
cin >> radio;
//Area
area=M_PI*(radio*radio);
std::cout << "Area: " << area << std::endl;

    return 0;
}
