//Ayar el area de un circulo
#include <iostream>
#include <math.h>
using namespace std;
int main()
   {
    float P, R, a, b;
    cout<< "Ingrese el valor de PI por favor ";
    cin>> P;
    cout<< "Ahora ingrese el valor del radio por favor ";
    cin>> R;
    a = pow(R, 2);
    b = P*a;
    cout<<"El area del circulo es: " <<b;
}
 