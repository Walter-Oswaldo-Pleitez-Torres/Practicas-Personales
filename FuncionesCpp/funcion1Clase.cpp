#include<iostream>
//Funcion con y sin parametro, (Descuento AFP 35%)
using namespace std;

//DECLARACION DE FUNCION
float descuento(float salarioTrabajador);//Con parametro
void salarioNeto();//Sin parametro

int main(){//FUNCION MAIN()
    float salarioTrabajador;
    cout<<"Ingrese su salario: "<<endl;
    cin>>salarioTrabajador;

    descuento(salarioTrabajador);
    salarioNeto();


    return 0;
}

//DEFINICION DE FUNCIONES

float descuento(float salarioTrabajador){
    float salarioNeto;
    float descuento = salarioTrabajador * 0.35;

    salarioNeto = salarioTrabajador - descuento;

    cout<<"Su salario neto es: "<<salarioNeto<<endl;

    return salarioNeto;

}

void salarioNeto(){
    float salario, descuento, salarioNeto;

    cout<<"****************************************"<<endl;
    cout<<"Ingrese su salario: "<<endl;
    cin>>salario;

    descuento = salario*0.35;
    
    salarioNeto = salario-descuento;

    cout<<"Su salario neto 2 es: "<<salarioNeto<<endl;
}