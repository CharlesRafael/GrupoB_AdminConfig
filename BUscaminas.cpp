// Grupo 1
// Buscaminas
#include "iostream"
#include "string"
#include "stdlib.h"
#include "time.h"
using namespace std;

int main() {

//Definimos las variables 
    int nivel = 0;
    int vidas = 0;
    int intentos = 0;
    int fila =0;
    int columna =0;
    bool fin = false;
    
    //Menu del juego:
    INICIO:
    cout<<endl;
    cout<<"         Bienvenidos al Buscaminas"<<endl;
    cout<<endl;
    cout<<"   Este juego consiste en poder seleccionar"<<endl;
    cout<<"   todos los bloques sin hacer explotar las minas."<<endl;
    cout<<endl;
    NIVEL:
    cout<<endl;
    cout<<"   selecciona el nivel de juego"<<endl;
    cout<<endl;
    cout<<"   Nivel             Vidas           Escribe"<<endl;
    cout<<endl;
    cout<<"   Practica          1000            1"<<endl;
    cout<<"   Facil             8               2"<<endl;
    cout<<"   Medio             5               3"<<endl;
    cout<<"   Dificil           3               4"<<endl;
    cout<<"   Muy Dificil       1               5"<<endl;
    cout<<endl;
    cout<<"   Ingresa el tu Nivel: ";cin>>nivel;cout<<endl;
    
//Dependiendo de lo que el ususario seleccione la dificultad cambiara

    switch (nivel) {
        case 1:
            nivel = 10;
            vidas = 1000;
            fin = false;
            intentos=0;
            
            break;
        case 2:
            nivel = 8;
            vidas = 8;
            fin = false;
            intentos=0;
            
            break;
        case 3:
            nivel = 6;
            vidas = 5;
            fin = false;
            intentos=0;
            
            break;
        case 4:
            nivel = 6;
            vidas = 3;
            fin = false;
            intentos=0;
            
            break;
        case 5:
            nivel = 5;
            vidas = 1;
            fin = false;
            intentos=0;
            
            break;
            
            //Con esto podemos evitar que el usuario selecione un numero incorrecto
        default:
            
            cout<<"   escribe un nivel valido entre 1 y 5"<<endl;
            goto NIVEL;
            break;
    }

/*Esto es para que se generen numero aleatorios 
Un valor inicial de 1 es la configuración predeterminada 
que produce la misma secuencia de valores como si no se hubiera utilizado 
srand(x). Cualquier otro valor para la semilla produce una secuencia diferente. 
srand(tiempo(NULO)); hace uso del reloj interno de la computadora para controlar la elección de la semilla.*/
    int m[nivel][nivel];
    string mT[nivel][nivel];
    srand(time(NULL));

    /* matriz que controla la logica, rand sirve para generar un numero aleatorio 
	en ciertos parametros */
    for (int i = 0;i < nivel; i++) {
        for (int j = 0; j < nivel; j++) {
            m[i][j]=rand()%(2-0) + (i * 100) + (j * 10);
        }
    }
    
    /* Esto sera lo que vera el usuario mientras juega */
    for (int i = 0;i < nivel; i++) {
        for (int j = 0; j < nivel; j++) {
            mT[i][j]="#";
        }
    }
    
     cout<<"                 Buscaminas"<<vidas<<endl;
    cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas-1<<endl;
    for (int i = 0;i < nivel; i++) {
        cout<<endl;
        for (int j = 0; j < nivel; j++) {
            cout<<"   "<<mT[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    
    ///* logica del juego *///
    while (fin == false) {
        FIL:
        cout<<"   digite la fila entre 0 y "<<nivel-1<<" ";cin>>fila;cout<<endl;
        
        if (fila < 0 || fila > nivel-1) {
            cout<<"   escribe un numero entre 0 y "<<nivel-1<<" "<<endl;
            goto FIL;
        }
        COL:
        cout<<"   digite la columna entre 0 y "<<nivel-1<<" ";cin>>columna;cout<<endl;
        if (columna < 0 || columna > nivel-1) {
            cout<<"   escribe un numero entre 0 y "<<nivel-1<<" "<<endl;
            goto COL;
        }
        intentos++;
        if (m[fila][columna]%2== 0) {
            mT[fila][columna] = " ";
        }
        if (m[fila][columna]%2== 1) {
            mT[fila][columna] = "*";
            vidas--;
            if (vidas==0) {
                fin=true;
            }
        }
        
        if (fin==false) {
            cout<<"                 Buscaminas"<<vidas<<endl;
            cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas-1<<endl;
            for (int i = 0;i < nivel; i++) {
                cout<<endl;
                for (int j = 0; j < nivel; j++) {
                cout<<"   "<<mT[i][j];
                }
                cout<<endl;
            }
            cout<<endl;
        }
        
        
        if (fin == true) {
            cout<<"                 Buscaminas"<<vidas<<endl;
            cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas<<endl;
            cout<<endl;
            cout<<"                     GAME OVER"<<endl;
            cout<<"                     Has perdido"<<endl;
            cout<<endl;
            
            cout<<"Intentalo nuevamente"<<endl;
            
            goto INICIO;
        }
    }
  return 0;
}