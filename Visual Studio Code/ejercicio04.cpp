//Codigo para el cuadrado de una suma
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c;
    cout<<"Por favor ingrese el valor de a y de b ";
    cin>> a >>b;
    c= pow(a, 2) + (2*a*b) + pow(b, 2);
    cout<<"El resultado es: " <<c <<endl;
}