#include <iostream>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Si una sala tiene dimenciones de 10x15 pies ¿Cuanto costara alfombrarla si la alfombra cuesta $9 el metro cuadrado?

int main()
{
float largo;
float ancho;
float area;
float costo;
std::cout << "¿Cuanto costara alfombrar una sala de 10x15 pies?" << std::endl;
largo = 10/3.281;
ancho = 15/3.281;
area = largo*ancho;
costo = area*9;
std::cout << "Costo de la alfombra: " << costo << std::endl;

    return 0;
}