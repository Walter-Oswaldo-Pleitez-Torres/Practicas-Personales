#include<iostream>

using namespace std;

void pedirDatos();
void operarDatos(int dato1, int dato2);
int num1, num2;

int main(){
    pedirDatos();
    operarDatos(num1, num2);


    return 0;
}

void pedirDatos(){
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
}
void operarDatos(int dato1, int dato2){
    int multiplicar = dato1 * dato2;

    cout<<"El resultado de la multiplicacion es: "<<multiplicar<<endl;
}