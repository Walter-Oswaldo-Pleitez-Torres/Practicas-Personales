#include<iostream>

using namespace std;

int main(){
    int continuar=1;
    int opcion=0;

    do{
        cout<<"************** Bienvenid@ a menu random **************"<<endl;
        cout<<"1)Operacion 1, 2)Operacion 2, 3)Operacion 3"<<endl;
        cin >> opcion;

        switch(opcion){
            case 1:
            cout<<"Area de operacion 1"<<endl;
            cout<<" "<<endl;
            break;
            case 2:
            cout<<"Area de operacion 2"<<endl;
            cout<<" "<<endl;
            break;
            case 3:
            cout<<"Area de operacion 3"<<endl;
            cout<<" "<<endl;
            break;
            default:
            cout<<"Operacion Invalida"<<endl;
        }

        cout<<"Si desea Salir Ingrese 1, sino cualquier otro numero: ";
        cin>>continuar;
        if(continuar==1){
            cout<<"Ud ha salido del programa"<<endl;
            cout<<" "<<endl;
        }
        else{
            cout<<"Ud continua en el programa"<<endl;
            cout<<" "<<endl;
        }

    }while(continuar!=1);


    return 0;
}