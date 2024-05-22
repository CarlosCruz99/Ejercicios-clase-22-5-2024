#include <iostream>
using namespace std;
int main()
{
    float notas[6], suma=0, promedio=0;
    cout<<"Ingrese los 6 resultados de sus notas para sacar un promedio (entre 0 y 10): \n";
    for(int i=0; i<6; i++){
        cout<<"Nota "<<i+1<<":\n";
        cin>>notas[i];
        if((notas[i]<0)||(notas[i]>10)){
            cout<<"Ingrese un valor valido. \n";
        }
        else{
            suma=suma+notas[i];
        }
    }
    promedio=suma/6;
    cout<<"Su promedio es: "<<promedio;
    return 0;
}