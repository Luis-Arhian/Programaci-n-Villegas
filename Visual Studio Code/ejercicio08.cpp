//cajero automatico con saldo limitado
#include <iostream>
using namespace std;
int main()
{
    int saldo_inicial = 500, opc;
    double extra, saldo = 0, retiro;

    cout<<"/t Bienvenido a su cajero automatico " <<endl;
    cout<<"Elija una opcion: " <<endl;
    cout<<"1. Depositar dinero" <<endl;
    cout<<"2. Retirar deniero" <<endl;
    cout<<"3. Salir" <<endl;
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"¿Que cantidad de dinero desea depositar?" <<endl;
        cin>> extra;
        saldo = saldo_inicial + extra;
        cout<<"Su saldo ahora es de " <<saldo;break;
    case 2: 
        cout<<"¿Cuanto dinero desea retirar de su cuenta?" <<endl;
        cin>>retiro;
        if(retiro> saldo_inicial){
            cout<<"El monto que desea retirar es mayor al dinero que tiene en su cuenta de banco";
        }
        else{
            saldo = saldo_inicial - retiro;
            cout<<"El saldo actual de su cuenta es " <<saldo;
        }
    case 3: break;
    }
}