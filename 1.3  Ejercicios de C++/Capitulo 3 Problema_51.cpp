#include <iostream>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Calcular y Desplegar el area y el perimetro de un paralelogramo

int main()
{
float c=8;
float d=4.2;
float h=4;
float area;
float perimetro;
std::cout << " Area y Perimetro de un Paralelogramo " << std::endl;
std::cout << " Valores: " << "base:" << c << " lado:" << d << " altura:" << h << std::endl;
//Area
area=c*h;
std::cout << "Area: " << area << std::endl;
//Perimetro
perimetro=2*(c+d);
std::cout << "Perimetro: " << perimetro << std::endl;

    return 0;
}
