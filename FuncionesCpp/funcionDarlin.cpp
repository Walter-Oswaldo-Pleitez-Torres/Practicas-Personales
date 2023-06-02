#include<iostream>

using namespace std;
//Declaración de lña función
void Saludo();

int main(){
    //Llamado de la función
    Saludo();


    return 0;
}

//definición de la función
void Saludo(){
    for (int i = 0; i < 3; i++)
    {
        cout<<"Hola"<<endl;
    }
    
}