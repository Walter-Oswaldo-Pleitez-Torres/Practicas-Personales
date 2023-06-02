#include<iostream>
#include<conio.h>

using namespace std;

//PROTOTIPO DE FUNCION
int encontrarMax(int x, int y);

int main(){
    int n1, n2, mayor;
    cout<<"Digite 1 numero: "<<endl;
    cin>>n1;
    cout<<"Digite uno mas: "<<endl;
    cin>>n2;

    mayor = encontrarMax(n1, n2);//LLAMADO A LA FUNCION
    cout<<"El numero mayor es: "<<mayor<<endl;    

    getch();
    return 0;
}

//DEFINICION DE LA FUNCION
int encontrarMax(int x, int y){
    int numMax;

    if(x>y){
        numMax = x;
    }
    else{
        numMax = y;
    }

    return numMax;
}