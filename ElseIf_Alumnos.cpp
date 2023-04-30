#include<iostream>

using namespace std;

int main(){
    int calificacion;

    cout<<"Ingrese la calificacion del alumno: ";
    cin>>calificacion;

    if(calificacion <10 && calificacion >=9){
        cout<<"Su calificacion es una: 'A'";
    }
    else if(calificacion <9 && calificacion >=8){
        cout<<"Su calificacion es una: 'B'";
    }
    else if(calificacion <8 && calificacion >=7){
        cout<<"Su calificacion es una: 'C'";
    }
    else if(calificacion <7 && calificacion >=6){
        cout<<"Su calificacion es una: 'D'";
    }
    else if(calificacion <6){
        cout<<"Su calificacion es una: 'F'";
    }
    else{
        cout<<"La calificacion no entra en el rango";
    }

    return 0;
}