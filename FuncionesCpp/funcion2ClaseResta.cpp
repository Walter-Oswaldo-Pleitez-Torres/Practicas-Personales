#include <iostream>

using namespace std;

//Declaracion
void Hola();

int main(){
    //llamado
    Hola();


    return 0;
}

//Definicion
void Hola(){
    for(int i=0; i<3; i++){
        cout<<"Hola"<<endl;
    }
}