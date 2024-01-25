#include <iostream>
using namespace std;
int main(){
    int num1, num2, opc, resultado;
    cout<<"Ingrese el primer numero" << endl;
    cin>> num1;
    cout<< "Ingrese el segundo numero" <<endl;
    cin>> num2;

    cout<<"Elija una opción: "<<endl;
    cout<< "1. Sumar" << endl;
    cout<< "2. restar" << endl;
    cout<< "3. dividir" << endl;
    cout<< "4. multiplicar" << endl;
    cin>> opc;
    switch (opc)
    {
    case 1: resultado = num1 + num2; break;
    case 2: resultado = num1 - num2; break;
    case 3: resultado = num1 / num2; break;
    case 4: resultado = num1 * num2; break;
    default:
        break;
    }
    cout<<"EL resultado de la operacion es: " << resultado<< endl;
    system  ("pause");
    return 0;
}