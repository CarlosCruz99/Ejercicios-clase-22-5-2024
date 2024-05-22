//Programa que sume los numeros del 1 al 100
#include <iostream>
using namespace std;
int main()
{
    int resultado=0, numeros[100];
    cout<<"Suma de los numeros del 1 al 100. \n";
    for(int i=0; i<=100;i++){
        numeros[i]=i;
        resultado=resultado+numeros[i];
    }
    cout<<"El resultado es: "<<resultado;
    return 0;
}