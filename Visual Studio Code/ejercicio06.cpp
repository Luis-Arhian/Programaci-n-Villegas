//codigo para una diferencia de cuadrados
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, x;
    cout<<"Ingrese el valor de a y b " <<endl;
    cin>> a>> b;
    x = (a+b)*(a-b);
    cout<<"el resultado es: " <<x<< endl;
}