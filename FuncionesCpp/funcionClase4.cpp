#include <iostream>

using namespace std;

float calculoAFP(float salario);

int main(){
    float salario;
    cout<<"Igrese su salario: "<<endl;
    cin>>salario;

    calculoAFP(salario);

    return 0;
}

float calculoAFP(float salario){
    float afp = 32.91;
    float isss = 15.60;
    float salarioNeto = salario - (afp + isss);

    cout<<"Su salario neto es: "<<salarioNeto;

    return salarioNeto;
}