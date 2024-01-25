//codigo para hallar el area de un triangulo
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double h, b, x;
    cout<<"ingrese los valores de la base y la altura" <<endl;
    cin>> b>> h;
    x = (b*h)/2;
    cout<<"El resultado es: " <<x <<endl;
}