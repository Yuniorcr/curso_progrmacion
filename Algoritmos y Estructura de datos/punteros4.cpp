#include <iostream>
#include <new>
#include <ctime>
int main(int argc, char const *argv[]) {

  int const tamanio=50;
  srand(time(0));
  float * arreglo=0;
  arreglo = new float[tamanio];
  float mayor=0;
  int posicion=0;
  for (size_t i = 0; i < tamanio; i++) {
    arreglo[i]=rand()%1000;
    std::cout << arreglo[i]<<" ";
  }
  for (size_t i = 0; i < tamanio; i++) {
    if (mayor<arreglo[i]) {
      mayor=arreglo[i];
      posicion=i;
    }
  }
  std::cout << "el mayor es:" <<mayor<<"\tsu pocision es: "<<posicion;
  return 0;
}
