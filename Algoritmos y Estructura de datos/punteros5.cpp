#include <iostream>
#include <cmath>
int main(int argc, char const *argv[]) {
  int const tamanio=20;
  int * arreglo=NULL;
  arreglo = new int[tamanio];
  for (size_t i = 0; i < tamanio; i++) {
    arreglo[i]=1+rand()%100;
  }
  //calcular la media de los elementos del arreglo
  int suma=0;
  for (size_t i = 0; i < tamanio; i++) {
    suma+=arreglo[i];
    std::cout << arreglo[i] <<" ";
  }
  float media=suma/tamanio;
  //calcular la sumatoria
  float sumatoria=0;
  for (size_t i = 0; i < tamanio; i++) {
    int resta = arreglo[i] - media;
    sumatoria +=pow(resta, 2);
  }
  sumatoria=sumatoria/(tamanio-1);
  //calculamos la desviacion estandar
  float desviacionEstandar=sqrt(sumatoria);
  std::cout <<desviacionEstandar;
  return 0;
}
