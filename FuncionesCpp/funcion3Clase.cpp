#include<iostream>

using namespace std;

float mult(float num1, float num2);
float div(float num1, float num2);

int main(){
    float dato1=10, dato2=2;
    float producto = mult(dato1, dato2); 
    float cociente = div(dato1, dato2);

    cout<<"La multiplicacion es: "<<producto<<endl;
    cout<<"La division es: "<<cociente<<endl;

    return 0;
}

float mult(float num1, float num2){
    float multiplicar = num1 * num2;
    return multiplicar;
}
float div(float num1, float num2){
    float dividir = num1 / num2;
    return dividir;
}