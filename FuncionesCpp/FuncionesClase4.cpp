#include <iostream>

using namespace std;

float tramo2();
float tramo3();
float tramo4();
float imp1(int salarioLocal);
int opcion = 0;
float salario, salarioNeto1, salarioSobreExceso, salarioPorcentaje, SalarioCuotaFija, salarioNeto2;
float AFP = 32.51, ISSS = 15.60;
//bool tramo1 = salario > 0.01 && salario < 472.00;
//bool tramo2 = salario > 472.00 && salario < 996.24;
//bool tramo3 = salario > 996.25 && salario < 2038.1;
//bool tramo4 = salario > 2038.11;

int main()
{

    cout <<"Ingrese su salario: " << endl;
    cin >> salario;

    switch (true)
    {
    case (salario > 0.01 && salario < 472.00):
        cout << "Tramo I" << endl;
        imp1(salario); 
        break;
    case (salario > 472.00 && salario < 996.24):
        cout << "Tramo II" << endl;
        tramo2();
        break;
    case (salario > 996.25 && salario < 2038.1):
        cout << "Tramo III" << endl;
        tramo3();
        break;
    case (salario > 2038.11):
        cout << "Tramo IV" << endl;
        tramo4();
        break;
    default:
        break;
    }

    return 0;
}

float imp1(int salario) //TRAMO 1
{
    if (salario > 0.01 && salario < 472.00)
    {
        salarioNeto1 = salario - (AFP + ISSS);
        return salarioNeto1;
    }
}
float tramo2() //TRAMO 2
{
    if (salario > 472.00 && salario < 996.24)
    {
        imp1(salario);
        salarioSobreExceso = salarioNeto1 - 472.00;
        salarioPorcentaje = salarioPorcentaje * 0.1;
        salarioNeto2 = salarioPorcentaje + SalarioCuotaFija;
    }
    return salarioNeto2;
}
float tramo3() //TRAMO 3
{
    if (tramo3)
    {
        imp1(salario > 996.25 && salario < 2038.1);
        salarioSobreExceso = salarioNeto1 - 895.24;
        salarioPorcentaje = salarioPorcentaje * 0.2;
        salarioNeto2 = salarioPorcentaje + SalarioCuotaFija;
    }
    return salarioNeto2;
}
float tramo4() //TRAMO 4
{
    if (salario > 2038.11)
    {
        imp1(salario);
        salarioSobreExceso = salarioNeto1 - 2038.1;
        salarioPorcentaje = salarioPorcentaje * 0.3;
        salarioNeto2 = salarioPorcentaje + SalarioCuotaFija;
    }
    return salarioNeto2;
}