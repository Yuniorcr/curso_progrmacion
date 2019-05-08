#include <iostream>
#include<ctime>
#include <cmath>
using namespace std;
// Declarando funcion burbuja
void leerArreglo(int *arreglo, int tamanio);
void imprimirArreglo(int *arreglo, int tamanio);
void metodoBurbuja(int *arreglo, int tamanio);

int main(){
    const int tamanio = 10; //tamaño del arreglo
    int * arreglo = NULL;   // Variable puntero a arreglo
    arreglo = new int [tamanio];    // definimos dimension de nuestro arrey
    leerArreglo(arreglo, tamanio);
    cout<<"Arreglo original"<<endl;
    imprimirArreglo(arreglo, tamanio);
    //Caculo del metodo burbuja
    metodoBurbuja(arreglo, tamanio);
    //Mostrar arreglo ordenado
    cout<<"Arreglo ordenado"<<endl;
    imprimirArreglo(arreglo, tamanio);
    //Liberando espacio
    delete[] arreglo;
    return 0;
}
//Desarrollando el método burbuja
void metodoBurbuja(int *arreglo, int tamanio){
    int aux = 0;
    for(size_t i = 1; i < tamanio; i++)
    {
        cout<<"Iteracion "<<i<<endl;
        for(size_t j = 0; j < tamanio - i; j++)
        {
            if (arreglo[j]<arreglo[j+1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
            imprimirArreglo(arreglo, tamanio);
        }
        //imprimirArreglo(arreglo, tamanio);
    }
}
//Metodo leer arreglo
void leerArreglo(int *arreglo, int tamanio){
    srand(time(NULL));
    for(size_t i = 0; i < tamanio; i++)
    {
        arreglo[i] = rand()%100;
    }
}
//metodo imprimir arreglo
void imprimirArreglo(int *arreglo, int tamanio){
    for(size_t i = 0; i < tamanio; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
}
