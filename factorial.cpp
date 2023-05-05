#include<iostream>

using namespace std;

int main(){
    int factorial=1, numero;

    cout<<"Ingrese el numero del que desee saber su factorial: ";
    cin>>numero;

    for(int i=numero; i>0; i--){
        factorial = factorial * i;
        //factorial*=i;
    }
    cout<<"El factorial de "<<numero<<" es: "<<factorial<<endl;

    return 0;
}