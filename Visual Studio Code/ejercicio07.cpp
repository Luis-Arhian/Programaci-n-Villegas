// calcular el volumen de un cilindro
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double r, h, x;
    cout<<"ingrese el valor de la altura " <<endl;
    cin>> h;
    cout<<"ingrese el valor del radio " <<endl;
    cin>> r;
    x = 3.1416 * h * pow(r, 2)
    cout<<"El volumen del cilindro es: " <<x <<endl;
}