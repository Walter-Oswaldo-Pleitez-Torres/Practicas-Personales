#include <iostream>
//FALTA SEGUIR PROBANDO
using namespace std;

int entradaDatos();
int sumadato(int num1, int num2);
int dato;

int main(){
    entradaDatos();
    int input1, input2;

    input1 = entradaDatos();
    input2 = entradaDatos();

    sumadato(input1, input2);

    return 0;
}

int sumaDato(int num1, int num2){
    int total;
    total = num1 + num2;

    return total;
}
int entradaDatos(){
    cout<<"********* Funcion para ingresar datos en array *********"<<endl;
    cout<<"Ingrese un dato: "<<endl;
    cin>>dato;
    cout<<"El dato ingresado fue: "<<dato<<endl;
        
    return dato;
}