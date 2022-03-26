#include <iostream>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Introducir longitudes de los lados de un triangulo. Encontrar perimetro

int main()
{
float l1;
float l2;
float l3;
float perimetro;
std::cout << "Perimetro de un triangulo " << std::endl;
cout << "Lado 1: ";
cin >> l1;
cout << "Lado 2: ";
cin >> l2;
cout << "Lado 3: ";
cin >> l3;
//Perimetro
perimetro=l1+l2+l3;
std::cout << "Perimetro: " << perimetro << std::endl;

    return 0;
}