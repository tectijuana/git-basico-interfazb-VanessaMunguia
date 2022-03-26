#include <iostream>
#include <math.h>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Encontrar el valor de sen x y cos x para x = 30°, 45°, 60°, 90°

int main()
{
float w = 30;    
float x = 45;
float y = 60;
float z = 90;

std::cout << " Valor de sen x y cos x " << std::endl;
std::cout << " Valores de X: " << "," << w << "," << x << "," << y << "," << z << std::endl;
//Sen

std::cout << "Sen 30°: " << std::sin(w) << std::endl;
std::cout << "Sen 45°: " << std::sin(x) << std::endl;
std::cout << "Sen 60°: " << std::sin(y) << std::endl;
std::cout << "Sen 90°: " << std::sin(z) << std::endl;
//Cos

std::cout << "Cos 30°: " << std::cos(w) << std::endl;
std::cout << "Cos 45°: " << std::cos(x) << std::endl;
std::cout << "Cos 60°: " << std::cos(y) << std::endl;
std::cout << "Cos 90°: " << std::cos(z) << std::endl;
    return 0;
}