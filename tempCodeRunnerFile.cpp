#include<iostream>

using namespace std;
//Declaración de la función
int multiplicacion (int n1, int n2) ;

int main(){
    //Llamado de la función
    multiplicacion(int n1, int n2);
    cout <<"ingrese el primer número ";
    cin>>n1
    cout<<"ingrese el segundo número ";
    cin>>n2
    cout<<"la multiplicación es: "<<resultado;


    return 0;
}

//definición de la función
int multiplicacion(int n1, int n2){
    int resultado=n1*n2;
    return resultado;
    
}