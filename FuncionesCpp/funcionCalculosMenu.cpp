#include <iostream>

using namespace std;

//DECLARACOIN DE FUNCIONES
float EntradaDatos(float dato1, float dato2);
void mult(float dato1, float dato2);

int main(){
    int continuar=1;
    int opcion=0;

    do{
        cout<<"******************** Bienvenidos/as ********************"<<endl;

        switch(opcion){
            case 1:
            //codigo
            break;
            case 2:
            //codigo
            break;
            case 3:
            //codigo
            break;
            case 4:
            //codigo
            break;
            default:
            //codigo
        }


        cout<<"Si desea permanecer en el programa Ingrese 1, sino cualquier otro numero: ";
        cin>>continuar;
        if(continuar==1){
            cout<<"Ud, sigue en el programa"<<endl;
        }
        else{
            cout<<"Ud, hab salido del programa"<<endl;
        }
    }while(continuar==1);

    return 0;
}

//DEFINICION DE FUNCIONES
//esta funcion es dudosa
float EntradaDatos(float dato1, float dato2){
    float datos[2];
    cout<<"Ingrese su primer valor: ";
    cin>>dato1;
    cout<<"Ingrese su segundo valor: ";
    cin>>dato2;

    cout<<"Los numeros ingresados fueron: "<<dato1<<" y "<<dato2<<endl;
    datos[0]=dato1;
    datos[1]=dato2;

    return datos[2];
}
void mult(float dato1, float dato2){
    float producto = dato1 * dato2;
}