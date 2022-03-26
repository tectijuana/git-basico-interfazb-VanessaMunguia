#include <iostream>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Introducir la altura y longitud de las bases de un trapezoide y determinar su area

int main()
{
float basemayor;
float basemenor;
float altura;
float area;
std::cout << " Area de un Trapezoide" << std::endl;
cout << "Base Mayor:";
cin >> basemayor; 
cout << "Base Menor:";
cin >> basemenor;
cout << "Altura:";
cin >> altura;
//Area
area=((basemayor+basemenor)*altura)/2;
std::cout << "Area: " << area << std::endl;

    return 0;
}
