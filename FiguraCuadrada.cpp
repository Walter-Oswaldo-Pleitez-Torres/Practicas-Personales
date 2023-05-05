#include<iostream>

using namespace std;

int main(){
    int filas=0, columnas=0;

    cout<<"Ingrese la cantidad de filas: "<<endl;
    cin >> filas;
    cout<<"Ingrese la cantidad de columnas: "<<endl;
    cin >> columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<" * ";
        }
        cout<<" "<<endl;
    }

    return 0;
}