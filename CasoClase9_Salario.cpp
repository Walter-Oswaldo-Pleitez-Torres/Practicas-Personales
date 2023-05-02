#include<iostream>

using namespace std;

int main(){
    float precioHora=15, hora=0, salario;
    string nombre;
    int masDatos = 5;

    do{
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"Ingrese sus horas de trabajo: ";
    cin>>hora;
//No funcionan los calculos
    if(precioHora<=40){
        salario = precioHora * hora;
        cout<<nombre<<", Su salario es: "<<salario<<endl;
    }
    else{
        salario = 40 * precioHora + 1.5 * precioHora * (hora-40);
        cout<<nombre<<", Su salario es: "<<salario<<endl;
    }

    masDatos--;
    }while(masDatos>0);


    return 0;
}