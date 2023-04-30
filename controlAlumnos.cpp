#include <iostream>
//Crear programa que lleve controlde notas de alumnos, modificar, añadir y borrarlas.
using namespace std;

int main()
{
    int continuar = 1;
    int opcion;

    do
    {
        //AREA DEL SISTEMA
        cout << "********** Bienvenid@ al sistema de control de Notas **********" << endl;
        cout << "Si desea ver opciones ingrese 0" << endl;
        cin >> opcion;

        cout << " ******************************** " << endl;

        if (opcion == 0)
        { //AREA DEL PROGRAMA
            do
            {
                continuar = 11;
                cout << "1)Agregar nota. 2)Modificar Nota. 3)Borrar Nota." << endl;
                cin >> opcion;

                switch (opcion)
                {
                case 1:
                    cout << "AREA DE INGRESO DE NOTAS" << endl;
                    cout<<" "<<endl;
                    break;
                case 2:
                    cout << "AREA DE MODIFICACION DE NOTAS" << endl;
                    cout<<" "<<endl;
                    break;
                case 3:
                    cout << "AREA DE ELIMINACION DE NOTAS" << endl;
                    cout<<" "<<endl;
                    break;
                default:
                    cout << "La opcion ingresada es invalida" << endl;
                    cout<<" "<<endl;
                }

                cout << "Para seguir en el Programa ingrese 11." << endl;
                cout << "Para salir del Programa ingrese un numero diferente de '11'." << endl;
                cin >> continuar;

                if (continuar == 11)
                {
                    cout << "USTED SIGUE EN EL PROGRAMA" << endl;
                }
                else
                {
                    cout << "USTED HA SALIDO DEL PROGRAMA, NO DEL SISTEMA" << endl;
                }
                cout << " ******************************** " << endl;

            } while (continuar == 11);
        }
        else
        {
            cout << "AL NO INGRESAR 0 UD HA SALIDO DEL PROGRAMA, NO DEL SISTEMA" << endl;
        } //FIN PROGRAMA

        cout << " ************** FIN AREA DE PROGRAMA****************** " << endl;

        cout << "Para seguir en el Sistema ingrese 1." << endl;
        cout << "Para salir del Sistema ingrese un numero diferente de '1'." << endl;
        cin >> continuar;

        if (continuar == 1)
        {
            cout << "USTED SIGUE EN EL SISTEMA" << endl;
        }
        else
        {
            cout << "USTED HA SALIDO DEL SISTEMA" << endl;
        }
        cout << " **************FIN AREA SISTEMA****************** " << endl;

    } while (continuar == 1); //FIN SISTEMA

    return 0;
}