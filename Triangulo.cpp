#include<iostream>

using namespace std;

int main(){
    int filas;

    cout<<"Ingrese el numero de filas: ";
    cin>>filas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<i; j++){
            cout<<" * ";
        }
        cout<<" "<<endl;
    }


    return 0;
}