#include <iostream>

using namespace std;

int main()
{
    int numero, contador = 1, numeroSecreto = 7;

    cout << "Bienvenido al programa de advinacion del numero secreto" << endl;

    while (contador < 5)
    {
        cout << "Ingrese su intento: ";
        cin >> numero;

        if (numero == numeroSecreto)
        {
            cout << "Felicidades ud adivino el numero secreto" << endl;
            cout << "**************************************" << endl;
            break;
        }
        else
        {
            cout << "Incorrecto, le quedan: " << (5 - contador) << " intentos " << endl;
            cout << "**************************************" << endl;
        }

        contador++;
    }

    return 0;
}