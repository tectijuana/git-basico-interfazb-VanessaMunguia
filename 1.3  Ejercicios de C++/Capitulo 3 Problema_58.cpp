#include <iostream>

using namespace std;

//Lenguajes de Interfaz
//Munguia Flores Amanda Vanessa
//19210525
//Determinar el area de un papalote

int main()
{
    float d=8;
    float D=12;
    float area;
    
    std::cout << " Area de un Papalote" << std::endl;
    //Area
    area=(D*d)/2;
    cout << "Medidas: D = "<< D << " d = " << d << endl; 
    std::cout << "Area: " << area << std::endl;

    return 0;
}
