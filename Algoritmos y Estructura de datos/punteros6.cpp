#include <iostream>
int main(int argc, char const *argv[]) {
  int filas,columnas;
  std::cin >> filas;
  std::cin >> columnas;
  int matriz1[filas][columnas];
  int **matriz;
  matriz=new int *[filas];
  for (size_t i = 0; i < filas; i++) {
    matriz[i]= new int[columnas];
  }
  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < columnas; j++) {
      std::cin >> matriz1[i][j];
    }
  }
  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < columnas; j++) {
      std::cout <<matriz1[i][j]<<" ";
    }
    std::cout <<"\n";
  }
//sumando filas
int *suma=new int [filas];
  for (size_t i = 0; i < filas; i++) {
    suma[i]=0;
    for (size_t j = 0; j < columnas; j++) {
        suma[i]+= matriz1[i][j];
    }
    std::cout <<suma[i]<<" \n";
  }
  std::cout << "\n" << '\n';
  //sumando columnas
  int *su=new int [columnas];
    for (size_t j = 0; j < columnas; j++) {
      su[j]=0;
      for (size_t i = 0; i < filas; i++) {
          su[j]+= matriz1[i][j];
      }
      std::cout <<su[j]<<" \n";
    }
  return 0;
}
